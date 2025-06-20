#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int>V(n);
    for(int i =0; i<n; i++){
    
	    cout<<"V["<<i<<"] : ";
	    cin>>V[i];
    }

      for(auto i : V)
        cout<<i<<" ";
      cout<<endl;
      int ind;
      cout<<"Enter the index to delete : ";
      cin>>ind;
      V.erase(V.begin() + ind -1);
      for(auto i : V)
        cout<<i<<" ";
      cout<<endl;
      int ind1,ind2;
      cout<<"Enter the index range to delete : ";
      cin>>ind1>>ind2;
      V.erase(V.begin() + ind1 -1, V.begin() + ind2 -1);
      int len = V.size();
      cout<<"Vector size : "<<len<<endl;
      for(auto i : V)
        cout<<i<<" ";
      cout<<endl;
    return 0;
}
