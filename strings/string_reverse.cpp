#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void recuRevStr(string &s, int sptr,int endptr)
{
	if(sptr >= endptr)
		return;
		swap(s[sptr],s[endptr]);
		recuRevStr(s,sptr + 1, endptr -1);
}
int main()
{
	cout<<"Using reverse() Function"<<endl;

	string S1;
	cout<<"enter string : ";
	getline(cin,S1);
	cout<<"Normal String : "<<S1<<endl;
	reverse(S1.begin(),S1.end());
	cout<<"Reverse String : "<<S1<<endl;
	
	cout<<"Using Reverse Iterators"<<endl;

	string S2;
	cout<<"enter string : ";
	getline(cin,S2);
	cout<<"Normal String : "<<S2<<endl;
	S2 = string(S2.rbegin(), S2.rend());
	cout<<"Reverse String : "<<S2<<endl;
	
	cout<<"Using a Stack"<<endl;

	string S3;
	cout<<"enter string : ";
	getline(cin,S3);
	cout<<"Normal String : "<<S3<<endl;
	stack<char>st;
	for(auto i : S3)
	{
		st.push(i);
	}
	S3.clear();
	while(!st.empty())
	{
		S3.push_back(st.top());
		st.pop();
	}
	cout<<"Reverse String : "<<S3<<endl;
	
	cout<<"Using Two Pointer Technique"<<endl;

	string S4;
	cout<<"enter string : ";
	getline(cin,S4);
	cout<<"Normal String : "<<S3<<endl;
	int sptr = 0;
	int endptr = S4.length() - 1;
       while(sptr < endptr )
       {
	       swap(S4[sptr],S4[endptr]);
	       sptr++;
	       endptr--;
       }	       
       cout<<"Reverse String : "<<S4<<endl;

	cout<<"Using Recursion"<<endl;

	string S5;
	cout<<"enter string : ";
	getline(cin,S5);
	cout<<"Normal String : "<<S5<<endl;
	recuRevStr(S5, 0, S5.length() - 1);
        cout<<"Reverse String : "<<S5<<endl;
	
	return 0;
}
