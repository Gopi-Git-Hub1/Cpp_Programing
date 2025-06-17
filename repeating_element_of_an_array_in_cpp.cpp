#include<iostream>
#include <vector>
using namespace std;
int main() 
{ 
	vector<int>V =  {20, 30, 10, 2, 10, 20, 30, 11};
	int n = V.size(); 
	for(int i=0; i < n; i++){
		int count = 1;
			for(int j = i+1; j < n; j++) {  
				if(V[i] == V[j]) 
				{  
					count++;  
				}  
			}
			if(count > 1)
				cout<<V[i]<<" ";
		}
	cout<<endl;
	return 0; 
}
