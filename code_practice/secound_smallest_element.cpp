#include <iostream>
using namespace std;

int main()
{

	int arr[10]={1,4,5,3,2,9,3,3,2,2};
	int i,j;
	int small;
	int ssmall;

	small = arr[0];
	for(i=0; i<10; i++)
	{
		if(small>arr[i])
			small = arr[i];
	}
	
	cout<<"small :"<<small<<endl;

	ssmall = arr[0];
	for(j=0; j<10; j++)
	{
		if(ssmall>arr[j]){
			if(arr[j] != small)
			{
				ssmall = arr[j];
			}
		}
	}
	
	cout<<"ssmall :"<<ssmall<<endl;
	
	return 0;
}
