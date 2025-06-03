#include <iostream>
#include <memory>
using namespace std;
class unique{
	public:
	unique(){};
	~unique(){};
};
class shared{
	public:
	shared(){};
	~shared(){};
};
class weak{
	public:
	weak(){};
	~weak(){};
};
int main()
{
	cout<<"Unique ptr..............................."<<endl;
	unique_ptr<unique>unq_ptr1(new (unique));
	cout<<"unique ptr1 :"<<unq_ptr1.get()<<endl;
	unique_ptr<unique>unq_ptr2 = move(unq_ptr1);
	cout<<"unique ptr1 :"<<unq_ptr1.get()<<endl;
	cout<<"unique ptr2 :"<<unq_ptr2.get()<<endl;
	
	// cout<<"unique ptr1 ref count :"<<unq_ptr1.use_count()<<endl; // "class std::unique_ptr<unique>" has no member named "use_count"

	cout<<"Shared ptr..............................."<<endl;

	shared_ptr<shared>shrd_ptr1(new(shared));
	cout<<"shared ptr1 :"<<shrd_ptr1.get()<<endl;
	cout<<"shared ptr1 ref count :"<<shrd_ptr1.use_count()<<endl;
	shared_ptr<shared>shrd_ptr2(shrd_ptr1);
	cout<<"shared ptr1 :"<<shrd_ptr1.get()<<endl;
	cout<<"shared ptr1 ref count :"<<shrd_ptr1.use_count()<<endl;
	cout<<"shared ptr2 :"<<shrd_ptr2.get()<<endl;
	cout<<"shared ptr2 ref count :"<<shrd_ptr2.use_count()<<endl;
	shared_ptr<shared>shrd_ptr3(new(shared));
	shrd_ptr3 = shrd_ptr2;
	cout<<"shared ptr1 :"<<shrd_ptr1.get()<<endl;
	cout<<"shared ptr1 ref count :"<<shrd_ptr1.use_count()<<endl;
	cout<<"shared ptr2 :"<<shrd_ptr2.get()<<endl;
	cout<<"shared ptr2 ref count :"<<shrd_ptr2.use_count()<<endl;
	cout<<"shared ptr3 :"<<shrd_ptr3.get()<<endl;
	cout<<"shared ptr3 ref count :"<<shrd_ptr3.use_count()<<endl;

	cout<<"Weak ptr..............................."<<endl;
	
	shared_ptr<weak>shrd_ptr4(new(weak));
	cout<<"shared ptr4 :"<<shrd_ptr4.get()<<endl;
	cout<<"shared ptr4 ref count :"<<shrd_ptr4.use_count()<<endl;
	shared_ptr<weak>shrd_ptr5(shrd_ptr4);
	cout<<"shared ptr4 :"<<shrd_ptr4.get()<<endl;
	cout<<"shared ptr4 ref count :"<<shrd_ptr4.use_count()<<endl;
	cout<<"shared ptr5 :"<<shrd_ptr5.get()<<endl;
	cout<<"shared ptr5 ref count :"<<shrd_ptr5.use_count()<<endl;
	weak_ptr<weak>wk_ptr(shrd_ptr5);
	cout<<"shared ptr4 :"<<shrd_ptr4.get()<<endl;
	cout<<"shared ptr4 ref count :"<<shrd_ptr4.use_count()<<endl;
	cout<<"shared ptr5 :"<<shrd_ptr5.get()<<endl;
	cout<<"shared ptr5 ref count :"<<shrd_ptr5.use_count()<<endl;
	
	//cout<<"weak ptr :"<<wk_ptr.get()<<endl; // "class std::weak_ptr<weak>" has no member named "get"
	
	cout<<"weak ptr ref count :"<<wk_ptr.use_count()<<endl;
	
	return 0;
}
