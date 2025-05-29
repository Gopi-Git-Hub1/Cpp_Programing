#include <iostream>
using namespace std;
class Singletone
{
	private:
		static Singletone *instance;
		Singletone()
		{
			cout<<"Created Singletone instance.."<<endl;

		}
		~Singletone()
		{
			cout<<"Distroyed Singletone instance.."<<endl;
		}
	public:
		static Singletone &getInstance()
		{
			if(!instance)
			{
				instance = new Singletone();
			}
			return *instance;
		}
		void display()
		{
			cout<<"Singleton is performing some operation.."<<endl;
		}
};
Singletone *Singletone::instance = nullptr; 
int main()
{
	Singletone &singletone = Singletone::getInstance();
       	singletone.display();	
	return 0;
}
