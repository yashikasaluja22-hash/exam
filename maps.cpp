//C++ me maps ka use mostly data ko key-value pair me store karne ke liye hota hai.
/*What is map in C++?

map ek STL container hai jo data ko:

key -> value

format me store karta hai.

Example:

"Rahul" -> 90
"Aman"  -> 85

Yahan:

"Rahul" = key
90 = value*/
/*2. Syntax
map<dataType1, dataType2> name;

Example:

map<string, int> marks;

Means:

key = string
value = int*/
#include <iostream>
#include <map>
using namespace std;
int main(){
map<string, int> marks;
//insert value
marks["Rahul"] = 90;
marks["Sneha"] = 85;
marks["Lily"] = 55;
//to print value
cout << marks["Rahul"] << endl;
//to erase a value
marks.erase("Sneha");
// to update a value
marks["Rahul"] = 100;
//to check exists or not
if(marks.find("Rahul") != marks.end()){
    cout << "found'\n";
}
//for each loop
for(auto x : marks){
    cout << x.first << "-> " << x.second << endl;
}
return 0;
}