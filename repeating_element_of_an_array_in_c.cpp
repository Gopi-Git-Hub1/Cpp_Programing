#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> V = { 10, 20, 50, 10, 20, 40, 30, 10, 20, 10,10,30,40,50,10 };
	map<int,int> M;

	for (vector<int>::iterator it = V.begin(); it != V.end(); it++) {
		int frequency = count(V.begin(), V.end(), *it);
		M.insert(pair<int,int>(*it,frequency));
	} 
	for (map<int,int>::iterator it = M.begin(); it != M.end(); it++) {
		cout << it->first<< " "<<it->second<<endl;
	}
	return 0;
}
