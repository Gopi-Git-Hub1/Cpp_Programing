#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>V1 = {1,3,5,7,9};
	vector<int>V2 = {2,4,6,8,10};
	vector<int>V3;
	for(vector<int>::iterator it = V1.begin(); it != V1.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	
	for(vector<int>::iterator it = V2.begin(); it != V2.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	
	V1.swap(V2);
	
	for(vector<int>::iterator it = V1.begin(); it != V1.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	
	for(vector<int>::iterator it = V2.begin(); it != V2.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	
	copy(V1.begin(), V1.end(), back_inserter(V3));
	
	for(vector<int>::iterator it = V3.begin(); it != V3.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	
	vector<int> V4(V2);
	
	for(vector<int>::iterator it = V4.begin(); it != V4.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	V4.insert(V4.end(),V3.begin(),V3.end());
	
	for(vector<int>::iterator it = V4.begin(); it != V4.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	
	vector<int>V;
	V.insert(V.begin(),V4.begin(),V4.end());

	for(vector<int>::iterator it = V.begin(); it != V.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;


	return 0;
}
