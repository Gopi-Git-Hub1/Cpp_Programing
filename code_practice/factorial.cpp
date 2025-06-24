#include <iostream>
using namespace std;
int main()
{
	int n,fact=1,num;
	cout<<"Enter the number : ";
	cin>>n;
	num = n;
	while(n != 0)
	{
		fact = fact*n;
		n--; 
	}
	cout<<"factorial of "<<num<<" is : "<<fact<<endl;
	return 0;
}
