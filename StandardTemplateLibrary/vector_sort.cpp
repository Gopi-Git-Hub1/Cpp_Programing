#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cout<<"Enter the vector zise : ";
    cin >> n; 
    vector<int>V(n);
    int size = V.size();
    for(int i = 0; i<size; i++){
	    cout<<"V["<<i<<"] : ";
    cin>>V[i];
    }
    for(auto i : V)
    cout<<i<<" ";
    cout<<endl;
    sort(V.begin(),V.end());
    for(auto i : V)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}
