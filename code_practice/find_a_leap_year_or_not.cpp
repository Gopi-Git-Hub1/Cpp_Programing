#include <iostream>
using namespace std;
bool checkYear(int year)
{
	if(year % 400 == 0)
		return true;
	if(year % 100 == 0)
		return false;
	if(year % 4 == 0)
		return true;
	return false;
}
int main()
{
	int year;
	cout<<"Enter the year : ";
	cin>>year;
	if(checkYear(year))
		cout<<year<<" is a leaf year."<<endl;
	else
		cout<<year<<" is not a leaf year."<<endl;
	return 0;
}
