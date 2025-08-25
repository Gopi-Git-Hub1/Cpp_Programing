
#include <iostream>
#include <queue>
using namespace std;

/*You are required to complete below methods*/

/*inserts an element x at
the back of the queue q */
void push(queue<int> &q, int x) {
    // Your code here
    q.push(x);
}

/*pop out the front element
from the queue q and returns it */
int pop(queue<int> &q) {
    
    // Your code here
if (!q.empty()) {
        int front = q.front();
        q.pop();
        return front;
    }
    return -1; 
}

/*returns the size of the queue q */
    
int getSize(queue<int> &q) {
    // Your code here
    return q.size();
}

    
/*returns the last element of the queue */
int getBack(queue<int> &q) {
    // Your code here
if (!q.empty()) {
        return q.back();
    }
    return -1;

}
    

/*returns the first element of the queue */
int getFront(queue<int> &q) {
    // Your code here
if (!q.empty()) {
        return q.front();
    }
    return -1;

}


int main() {
    queue<int> q;

    // Push elements
    push(q, 10);
    push(q, 20);
    push(q, 30);

    // Display front and back
    cout << "Front: " << getFront(q) << endl;
    cout << "Back: " << getBack(q) << endl;

    // Pop an element
    cout << "Popped: " << pop(q) << endl;

// Display size
    cout << "Size: " << getSize(q) << endl;

    return 0;
}

