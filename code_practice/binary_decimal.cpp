#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int arry[] = {1,0,0,1,0,0,1,1,0,1};
	string str = "1001001101";
	int dec1 = 0;
	int dec2 = 0;
	int size = sizeof(arry) / sizeof(arry[0]);
	int len  = str.length();
	for(int i = 0; i < size ; i++)
	{
		if(arry[size -1 -i] == 1)
		dec1 += pow(2, i); 
	}
	for(int j = 0; j < len ; j++)
	{
		if(str[len -1 -j] == '1')
		dec2 += pow(2, j); 
	}
	cout<<"dec1 : "<<dec1<<endl;
	cout<<"dec2 : "<<dec2<<endl;
	return 0;
}
