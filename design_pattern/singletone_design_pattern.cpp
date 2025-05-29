#include <iostream>
using namespace std;
class singletion
{
	public:
		static singletion &getInstance()
		{
			if(!instance)
			{
				instance = new singletion();
			}

			return *instance;

		}
		void display()
		{
			cout << "Singleton is performing some operation."<<endl;

		}
	private:
		static singletion *instance;
		singletion()
		{
			cout << "Singleton instance created."<<endl;

		}
		~singletion()
		{
			cout << "Singleton instance destroyed."<<endl;

		}
};
singletion* singletion::instance = nullptr;
int main()
{
	singletion &singletion_obj = singletion::getInstance();
	singletion_obj.display();
	return 0;
}
