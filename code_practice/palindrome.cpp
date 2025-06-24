#include <iostream>
using namespace std;
int main()
{
	int n,rev,num;
	cout<<"Enter the number : ";
	cin>>n;
	num = n;
	while(n != 0)
	{
		rev = (rev * 10) + n%10;
		n = n/10;
	}
	if(num == rev )
		cout<<num<<" is a palindrome."<<endl;
	else
		cout<<num<<" is not apalindrome."<<endl;

	return 0;
}
