#include <iostream>
using namespace std;

int main() {
	// code here
	int n;
	cin>>n;
	for(int j=31;j>=0;j--)
	{
		cout<< ((n >> j) & 1)<<" ";
	}
	cout<<endl;
	bool started = false;
	for(int i=31;i>=0;i--)
	{
		int bit = ((n >> i) & 1);
		if(bit == 1)
		{
			started = true;
		}
		if(started)
		{
			cout<<bit<<" ";
		}

	}
	if(!started)
		cout<<0; 
	cout<<endl;
	return 0;
}
