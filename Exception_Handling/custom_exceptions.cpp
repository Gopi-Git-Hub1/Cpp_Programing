#include <iostream>
#include <string>
using namespace std;
class NegativeValueException
{
	int val;
	public:
	NegativeValueException(int x):val(x){};
	string WHAT()
	{
		return "Negative value error occurred!";
	}
	int getValue()
	{
		return val;
	}

};
void checkValue(int y)
{
	if(y<0)
		throw NegativeValueException(y);
	else
		cout<<"Value is: "<<y<<endl;

}
int main()
{
	int numbers[] = {10, -5, 20};
	for(auto a:numbers)
	{
		try{
			checkValue(a);

		}
		catch(NegativeValueException &e)
		{
			cout<<"Exception caught: "<<e.WHAT()<<" Value = "<<e.getValue()<<endl;
		}
	}
	return 0;
}
