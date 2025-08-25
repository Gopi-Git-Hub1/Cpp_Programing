#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	bool flag=true;
	cout<<"Enter the num: ";
	cin>>n;
	if (n <= 1) {
		printf("%d is not a Prime number.\n", n);
		return 0;
	}
	for(int i=2; i <= sqrt(n);i++)
	{
		if(n%i == 0)
			flag = false;  
	}
	if(flag)
	{
		printf("%d is a Prime number.\n", n);  // If no factors found, n is prime
	} else {
		printf("%d is not a Prime number.\n", n);  // Otherwise, n is not prime
	}
	return 0;
}
