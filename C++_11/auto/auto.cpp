#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
	map<int, string>M1={{5,"Gopi"},{4,"Venkata Lakshmi"},{3,"Richita"},{2,"Rithvika"},{1,"SriRam"}};
	cout<<"-----------------------"<<endl;
	for(auto a:M1)
	{
		cout<<a.first<<" "<<a.second<<endl;
	}
	cout<<"-----------------------"<<endl;
	unordered_map<string,int>M2={{"Gopi",5},{"Venkata Lakshmi",4},{"Richita",3},{"Rithvika",2},{"SriRam",1}};
	auto it = M2.begin();
	int l = M2.size();
	for(int i=0; i < l; i++ )
	{
		cout<<it->first<<" "<<it->second<<endl;
		it++;
	}
	cout<<"-----------------------"<<endl;

	return 0;
}
