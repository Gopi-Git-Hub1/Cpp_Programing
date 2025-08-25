#include <iostream>
#include <map>
using namespace std;

/* Adds a value with key x and value y to the map*/
void add_value(map<int, int> &m, int x, int y) {
    // Your code here
    //m.insert(pair<int,int>(x,y));
    m[x] = y;
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int, int> &m, int x) {
    
    // Your code here
    auto it = m.find(x);  
    if(it != m.end()) 
    return it->second;  
    else
    return -1;
}

/* Prints contents of the map ie keys and values*/
    
void print_contents(map<int, int> &m) {
    // Your code here
for (auto a : m) {
        cout << a.first << " " << a.second<<" ";
    }
    
}
int main() {
    map<int, int> m;

    add_value(m, 1, 100);
    add_value(m, 2, 200);
    add_value(m, 3, 300);

    cout << "Value for key 2: " << find_value(m, 2) << endl;
    cout << "Value for key 5: " << find_value(m, 5) << endl;

    cout << "Map contents:" << endl;
    print_contents(m);
    cout<<endl;

    return 0;
}

