#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>V={9,4,3,5,1,7,2,8};
	cout<<"min element : "<<*min_element(V.begin(),V.end())<<endl;
	
	auto p = minmax_element(V.begin(), V.end());
	cout<<"min element : "<<*p.first<<endl;
	cout<<"max element : "<<*p.second<<endl;
	
	sort(V.begin(),V.end());

	cout<<"find smallest number in vector : "<<V[0]<<endl;
	cout<<"find largest number in vector : "<<V[V.size()-1]<<endl;

	return 0;
}
