#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
void sumExists(vector<int>& arr, int sum) {
    // Your code here
    
    unordered_set<int> seen;
    int n = arr.size();
    /*  complement     seen
        14 - 1 = 13 -> 1
        14 - 2 = 12 -> 2
        14 - 3 = 11 -> 3
        14 - 4 = 10 -> 4
        14 - 5 =  9 -> 5 
        14 - 6 =  8 -> 6 
        14 - 7 =  7 -> 7
        14 - 8 =  6 -> 8
        14 - 9 =  5 -> 9
        14 - 10=  4 -> 10   
        seen{1,2,3,4,5,6,7,8,9,10};
        */
    //for (int i = 0; i < n; ++i) {
    for(auto it : arr)
    {
        int complement = sum - it;
        if (seen.count(complement)) {
            //return 1; // Pair found
            cout<<complement<< "+"<<it<<"   : "<<complement+it<<endl;
        }
        seen.insert(it);
    }

    //return 0; // No pair found

}
int main()
{
vector<int>v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int s =14;
sumExists(v,s);

}
