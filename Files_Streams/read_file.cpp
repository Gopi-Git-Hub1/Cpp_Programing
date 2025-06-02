#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	string str;
	ifstream MyFile("filename.txt");
	getline(MyFile, str);
	cout<<str<<endl;
	MyFile.close();
	return 0;
}
