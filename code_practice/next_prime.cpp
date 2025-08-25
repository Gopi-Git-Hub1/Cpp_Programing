#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n)
{
	bool flag = true;
	if (n <= 1)
		return false;
	for(int i=2; i <= sqrt(n);i++)
	{
		if(n%i == 0)
			flag = false;
	}    
	if(flag)
		return true;
	else
		return false;
}
int nextPrime(int n) 
{
	int candidate = n + 1;
	while (!isPrime(candidate)) {
		++candidate;
	}
	return candidate;
}
int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<"next prime number: "<<nextPrime(n)<<endl;
	return	0;
}
