/*🧠 Problem Explanation
You're given a number N. You can:

Add 1 to N, or
Subtract 1 from N

...in each operation.
Goal: Reach a number whose binary representation is a palindrome, using the minimum operations.

What is a Binary Palindrome?
A binary palindrome reads the same forwards and backwards.
NumberBinaryPalindrome?91001✅ Yes6110❌ No5101✅ Yes7111✅ Yes

Example Walkthrough
N = 6  →  binary: 110  ← NOT a palindrome
        
Try N-1 = 5  →  binary: 101  ✅ palindrome!  → 1 operation
Try N+1 = 7  →  binary: 111  ✅ palindrome!  → 1 operation

Answer = 1
N = 9  →  binary: 1001  ✅ already a palindrome!

Answer = 0
*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
// Convert number to binary string
string isBinary(long long n){
    string result = " ";
    while(n > 0){
        result = char("0" + n%2) + result;
        n /= 2;
    }
    return result;
}
bool isPalindrome(long long n){
    if(n<=0) return false;
    string b = isBinary(n);
    string rev = b;
    reverse(rev.begin(), rev.end());
    return b == rev;
}
int main() {
int t;
cin >> t;
while(t--){
long long n;
cin >> n;
// Search outward: 0, +1, -1, +2, -2, ...
for(int ops = 0; ; ops++){
if(isPalindrome(n + ops)){
    cout << ops << '\n';
    break;
}
if(ops > 0 && isPalindrome(n - ops)){
    cout << ops << '\n';
    break;
}
}
}
return 0;
}
