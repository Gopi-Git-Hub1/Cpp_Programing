#include <iostream>
#include <map>
using namespace std;
int main()
{
	map<int,string>M;
	M.insert(pair<int,string>(1,"Gopi"));
	M.insert({4,"Venkata Lakshmi"});
	M[2]="Richita";
	M[3]="Rithvika";
	for(map<int,string>::iterator it = M.begin(); it != M.end(); it++)
	{
	cout<<it->first<<" : "<<it->second<<endl;
	}
	cout<<M[1]<<endl;
	cout<<M.at(4)<<endl;
	map<int,string>M1 = {{1,"Gopi"},{2,"Venkata Lakshmi"},{3,"Richita"},{4,"Rithvika"}};
	for( auto A: M1)
	{
	cout<<A.first<<" : "<<A.second<<endl;
	}
	return 0;
}
