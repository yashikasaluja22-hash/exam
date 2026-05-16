/*Problem Explanation
You are given an array of elements. You need to remove duplicate elements and print the remaining elements separated by tabs (\t), while maintaining the original order.
Example: [1, 2, 3, 2, 10]

1 → new, keep ✅
2 → new, keep ✅
3 → new, keep ✅
2 → already seen, remove ❌
10 → new, keep ✅

Output: 1	2	3	10

Approach — Using a Set

Use a set to track elements we have already seen
As we scan the array, if element is not in set → print it and add to set
If element is already in set → skip it


A set gives O(1) average lookup, making the solution efficient ✅*/
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
vector<long long> arr;
set<long long> seen;
long long x;

// Read all elements from single line until newline
while(cin >> x){
    arr.push_back(x);
}
bool first = true;  // to handle tab spacing correctly
for(int i = 0; i < arr.size(); i++){
    if(seen.find(arr[i]) == seen.end()){// not seen before
    if(!first){
        cout << "\t";
    }
        cout << arr[i];
        seen.insert(arr[i]);
        first = false;
}
cout << '\n';
return 0;
}