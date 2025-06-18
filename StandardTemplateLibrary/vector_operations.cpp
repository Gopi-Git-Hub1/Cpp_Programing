#include <iostream>
#include <vector>
#include <list>
#include <bits/stdc++.h>
using namespace std;
/*
 * push_back
 * pop_back
 * empty
 * insert
 * operator[]
 * [] subscript operator and assignment operator =
 * vector at()
 * size
 * capacity
 * resize
 * erase
 * front
 * back
 * begin
 * end
 * rbegin()
 * rend()
 * swap()
 * max_size
 * count
 */
int main()
{
	vector<int>V = {1,9,2,8,3,7,4,6,5};
	for(vector<int>::iterator it = V.begin(); it != V.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	cout<<"vector size : "<<V.size()<<endl;
	cout<<"vector capacity : "<<V.capacity()<<endl;
	cout<<"vector V[3] : "<<V[3]<<endl;
	cout<<"vector V.at(1) : "<<V.at(1)<<endl;

	reverse(V.begin(),V.end());

	for(vector<int>::iterator it = V.begin(); it != V.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	V.insert(V.begin()+1,10);
	V.insert(V.end()-1,20);
	V.insert(V.begin()+1,3,100);
	V.insert(V.end()-1,3,200);

	for(vector<int>::iterator it = V.begin(); it != V.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	vector<int> v{1, 2, 3,};
	for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	list<int> l{4, 5};
	for(list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	v.insert(v.begin()+3,l.begin(),l.end());

	for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	V.insert(V.begin(),3,5);
	V.insert(V.end()-1,3,2);
	V.insert(V.begin(),3,3);
	V.insert(V.begin(),3,6);
	V.insert(V.end()-1,3,4);
	V.insert(V.end()-1,3,7);

	for(vector<int>::iterator it = V.begin(); it != V.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	map<int,int>M;

	for(vector<int>::iterator it = V.begin(); it != V.end(); it++)
	{
		int frequency = count(V.begin(),V.end(),*it);
		M[*it] = frequency;
	}
	for(map<int,int>::iterator it = M.begin(); it != M.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	for(map<int,int>::iterator it = M.begin(); it != M.end(); it++)
	{
		if (it->second > 1)
            cout << it->first << " ";
	}
	cout<<endl;

	sort(V.begin(),V.end());

	for(vector<int>::iterator it = V.begin(); it != V.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	for(int i = 0; i < V.size() - 1; i++) {
		if (V[i] == V[i + 1]) {
			V.erase(V.begin() + i);
			i--;
		}
	}		

	for(vector<int>::iterator it = V.begin(); it != V.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	vector<int>vect = {1, 2, 2, 5, 4, 3, 5, 4};
	for(vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	int n = vect.size();
	unordered_map<int, int> um;
	for (auto i : vect)
		um[i]++;
	for (auto i : um) {
		if (i.second > 1)
			cout << i.first << " ";
	}
	cout<<endl;
	return 0;
}
