
#include <iostream>
#include <list>
using namespace std;

/*You are required to complete below methods*/

/*prints space separated
elements of list A*/
void print(list<int> &A) {
    // Your code here
    if (A.empty()) {
        cout << -1 << endl;
        return;
    }
    for(auto a : A)
    {
        cout<<a<<" ";
    }
   cout<<endl;
}

/*remove element from
back of list A*/
void remove_from_back(list<int> &A) {
    
    // Your code here
    if (!A.empty()) {
    A.pop_back();
    }
}

/*remove element from
front of list A*/
    
void remove_from_front(list<int> &A) {
    // Your code here
    if (!A.empty()) {
    A.pop_front();
    }
}

/*inserts an element x at
    
the back of the list A */
void add_to_list(list<int> &A, int x) {
    // Your code here
    A.push_back(x);
}
    

/*sort the list A in ascending order*/
void sort_list(list<int> &A) {
    // Your code here
    // sort(A.begin(), A.end()); for vector 
    A.sort(); // for list separate sort()
    
}

/*reverses the list A*/
void reverse_list(list<int> &A) {
    
    // Your code here
    //reverse(A.begin(), A.end()); for vector 
    A.reverse(); // list having seperate reverse 
}

/*returns the size of the list  A */
int size_of_list(list<int> &A) {
    
    // Your code here
    return A.size();
}

/*inserts an element x at
the front of the list A*/
void add_from_front(list<int> &A, int x) {
    // Your code here
    A.push_front(x);
}

int main() {
    list<int> A;

    // Add elements to the list
    add_to_list(A, 10);
    add_to_list(A, 30);
    add_to_list(A, 20);
    add_from_front(A, 5);

    cout << "Initial list: ";
    print(A);

    // Remove from front and back
    remove_from_front(A);
    remove_from_back(A);
    cout << "After removing front and back: ";
    print(A);

    // Add more elements
    add_to_list(A, 40);
    add_from_front(A, 1);
    cout << "After adding 1 to front and 40 to back: ";
    print(A);

    // Sort the list
    sort_list(A);
    cout << "Sorted list: ";
    print(A);

    // Reverse the list
    reverse_list(A);
    cout << "Reversed list: ";
    print(A);

    // Print size
    cout << "Size of list: " << size_of_list(A) << endl;

    return 0;
}

