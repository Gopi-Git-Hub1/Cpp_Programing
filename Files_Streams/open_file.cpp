#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	string str;
	cout<<"write : ";
	getline(cin, str);
	ofstream MyFile("filename.txt");
	MyFile<<str;
	MyFile.close();
	return 0;
}
