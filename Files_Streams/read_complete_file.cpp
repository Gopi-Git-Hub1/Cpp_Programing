#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	string str;
	ifstream MyFile("filename.txt");
	if(!MyFile.is_open())
	{
	 cout<<"file failed to open.."<<endl;
	}
	while(getline(MyFile, str))
	{
	cout<<str<<endl;
	}
	MyFile.close();
	return 0;
}
