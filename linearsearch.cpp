/*Problem Explanation
You are given an array of n elements and a key value k. You need to search for k in the array and return the index of its first occurrence.
Example: Array = [11, 33, 55, 66, 77], Key = 66

Check index 0 → 11 ≠ 66
Check index 1 → 33 ≠ 66
Check index 2 → 55 ≠ 66
Check index 3 → 66 = 66 ✅ → Print 3


Three Cases to Handle
Case ExampleOutput
1. Element found once              [11, 33, 66, 77], key=66   output = 2;
2. Element found multiple times    [66, 33, 66, 77], key=66  output = 0;
3. (first match)Element not found  [11, 33, 55, 77], key=66  output = -1; */
#include <iostream>
using namespace std;
int main(){
long long n, k;
cin >> n >> k;
long long arr[100000];
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
int result = -1;//assume not found
for(int i = 0; i < n; i++){
    if(arr[i] == k){
     result = i;
     break;
    }
}
cout << result << endl;

return 0;
}