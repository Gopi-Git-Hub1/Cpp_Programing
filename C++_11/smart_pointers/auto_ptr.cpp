#include <iostream>
#include <memory>
using namespace std;

int main() {
    
    // Pointer declaration
    auto_ptr<int> ptr1(new int(10));
    cout <<"ptr1 : "<< *ptr1 << endl;
    cout<<"get id : "<<ptr1.get()<<endl;
    
    // Transfer ownership to
    // pointer ptr2, 
    auto_ptr<int> ptr2 = ptr1;
    cout <<"ptr2 : "<< *ptr2<<endl;
    cout<<"get id : "<<ptr2.get()<<endl;
    
    // Transfer ownership to
    // pointer ptr3, 
    auto_ptr<int> ptr3(ptr2);
    cout <<"ptr3 : "<< *ptr3<<endl;
    cout<<"get id : "<<ptr3.get()<<endl;

    return 0;
}
