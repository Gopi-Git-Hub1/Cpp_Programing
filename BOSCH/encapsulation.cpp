
/*
 *
 * Encapsulation is one of the fundamental concepts in object-oriented programming (OOP)
 *
 * it refers to the wrapping of data members and methods or member functions that operate on that data into a single unit, typically a class.
 *
 */

#include <iostream>
using namespace std;
class Encapsulation
{
	private:
		string Name;
		int Id;
	public:
	Encapsulation(string name, int id):Name(name),Id(id){}
	void displayData()
	{
		cout<<"Name : "<<Name<<endl;
		cout<<"Id   : "<<Id<<endl;
	}
};
int main()
{
	Encapsulation obj("Gopi",1);
	obj.displayData();
	return 0;
}

