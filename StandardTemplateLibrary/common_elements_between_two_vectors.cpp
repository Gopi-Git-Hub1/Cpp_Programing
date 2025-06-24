#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>V1 = { 1, 45, 54, 71, 76, 12 };
	vector<int>V2 = { 1, 7, 5, 4, 6, 12 };
	sort(V1.begin(), V1.end());
	sort(V2.begin(), V2.end());
	for(auto a:V1)
		cout<<a<<" ";
	cout<<endl;
	for(auto a:V2)
		cout<<a<<" ";
	cout<<endl;
	
	vector<int>V(V1.size() + V2.size());
	vector<int>::iterator it,st;
	
	it = set_intersection(V1.begin(), V1.end(), V2.begin(), V2.end(), V.begin());

	cout<<"Common elements: "<<endl;
	vector<int>v;
	for(st = V.begin(); st != it; st++){
		cout<<*st<<" ";
		v.push_back(*st);
	}
	cout<<endl;
	
	int b = *min_element(v.begin(), v.end());
	cout<<"min : "<<b<<endl;
	
	auto a = minmax_element(v.begin(), v.end());
	cout<<"min : "<<*a.first<<endl;
	cout<<"max : "<<*a.second<<endl;
	
	return 0;
}
