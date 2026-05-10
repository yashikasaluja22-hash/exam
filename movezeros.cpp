/*Approach: Two-Pointer Technique
Use a pointer pos that tracks where the next non-zero element should go.

Scan through the array
Whenever you find a non-zero, place it at pos and increment pos
After the loop, fill the rest of the array with 0s

Dry run on [4, 2, 0, 5, 0]:
Step Element      Action                         Array State
i=0   4  non-zero → place at pos=0, pos→1  [4, 2, 0, 5, 0]
i=1   2  non- zero → place at pos=1, pos→2 [4, 2, 0, 5, 0]
i=2   0  skip—
i=3   5  non-zero → place at pos=2, pos→3  [4, 2, 5, 5, 0]
i=4   0   skip—
Fill —    fill pos=3,4 with 0              [4, 2, 5, 0, 0]*/
#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
long long nums[100000];
for(int i = 0; i < n; i++){
    cin >> nums[i];
}
int pos = 0;
for(int i = 0; i < n; i++){
    if(nums[i] != 0){
        nums[pos] == nums[i];
        pos++;
    }
}
//fill the rest with zeros
if(pos < n){
    nums[pos] == 0;
    pos++;
}
for(int i = 0; i < n; i++){
    cout << nums[i] << endl;
}
return 0;
}
