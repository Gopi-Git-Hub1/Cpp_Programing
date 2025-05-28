#include <iostream>
#include <cstring>
using namespace std;
class deep_copy_constructor
{
	public:
		char *name;
		deep_copy_constructor(char *str)
		{
			name = new char[strlen(str)+1];
			strcpy(name,str);
		}
		deep_copy_constructor(deep_copy_constructor &A)
		{
			name = new char[strlen(A.name)+1];
			strcpy(name,A.name);	
		}
		void display()
		{
			cout<<"name : "<<name<<endl;
		}
		~deep_copy_constructor()
		{
			delete[] name;
		}
};
int main()
{
	deep_copy_constructor obj1("Venkata Lakshmi");
	obj1.display();
	deep_copy_constructor obj2 = obj1;
	obj2.display();

	return 0;
}
