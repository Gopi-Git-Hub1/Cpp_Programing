#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
	vector<int>V = {1,2,1,3,4,6,4,7,9,5,9,8};
	cout<<"Vector Elements : "<<endl; 
	for(vector<int>::iterator it = V.begin(); it != V.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	unordered_map<int,int>UM;
	map<int,int>M;
	int len = V.size();
	for(vector<int>::iterator it = V.begin(); it != V.end(); it++)
	{
		int freq = count(V.begin(),V.end(),*it);
		UM[*it] = freq;
		M[*it] = freq;
	}
	cout<<"unordered map duplicate elements : "<<endl; 
	for(unordered_map<int,int>::iterator it = UM.begin(); it != UM.end(); it++)
	{
		if(it->second > 1)
			cout<<it->first<<" ";
	}
	cout<<endl;
	cout<<"ordered map duplicate elements : "<<endl; 
	for(map<int,int>::iterator it = M.begin(); it != M.end(); it++)
	{
		if(it->second > 1)
			cout<<it->first<<" ";
	}
	cout<<endl;
	cout<<"unordered map non-duplicate elements : "<<endl;
	for(unordered_map<int,int>::iterator it = UM.begin(); it != UM.end(); it++)
	{
		if(it->second == 1)
			cout<<it->first<<" ";
	}
	cout<<endl;
	cout<<"ordered map non-duplicate elements : "<<endl;
	for(map<int,int>::iterator it = M.begin(); it != M.end(); it++)
	{
		if(it->second == 1)
			cout<<it->first<<" ";
	}
	cout<<endl;

	return 0;
}
