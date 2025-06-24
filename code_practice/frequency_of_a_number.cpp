#include <iostream>
using namespace std;
int frequency(int num,int key)
{
	static int count;
	while(num != 0)
	{
		if(num%10 == key)
			count++;
		num = num/10;
	}
	return count;
}
int main()
{
	int n,k,frq;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"Enter the frequency key : ";
	cin>>k;
	frq = frequency(n,k);
	if(frq > 0)
		cout<<"frequency of a "<<k<<" in a given number : "<<n<<" is "<<frq<<endl;
	else
		cout<<"frequency of a "<<k<<" in a given number : "<<n<<" is not present."<<endl;

	return 0;
}
