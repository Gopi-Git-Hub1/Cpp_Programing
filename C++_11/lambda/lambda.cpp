#include <iostream>
#include <functional>
//using namespace std;
using namespace std;
int main()
{
	int x=2;
	int y=3;
	
	//std::function<int(int,int)> sum = [=] (int a,int b) -> int {  // [=] it will alow all global values into the lambda function for readonly i.e not modifiable. 
	//istd::function<int(int,int)> sum = [&] (int a,int b) -> int { // [&] it will alow all global values into the lambda function for read and write i.e modifiable.
	function<int(int,int)> sum = [&] (int a,int b) -> int { // [&] it will alow all global values into the lambda function for read and write i.e modifiable.
	//std::function<int(int,int)> sum = [&x, &y] (int a,int b) -> int { // [&x, &y] it will alow x,y values into the lambda function for read and write i.e modifiable.
	//std::function<int(int,int)> sum = [x,y] (int a,int b) -> int { // [x,y] it will alow x, y values into the lambda function for readonly i.e not modifiable.
		x = 10;
		y = 20;
		return x + y;
	};
	//std::cout<<"sum = "<<sum(x,y)<<std::endl;
	cout<<"sum = "<<sum(x,y)<<endl;
	return 0;
}
