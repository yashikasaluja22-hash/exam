// Ab maan lo user multiple commands de raha hai.
/*Query Handling Example
Problem

User Q queries dega.

Operations:

ADD name marks
GET name
DELETE name*/
#include <iostream>
#include <map>
using namespace std;
int main(){
map<string, int> Student;
int q;
cin >> q;
while(q--){
 string operation;
 cin >> operation;
 if(operation == "ADD"){
string name;
cin >> name;
int marks;
cin >> marks;
Student[name] = marks;
 }
else if(operation == "GET"){
string name;
cin >> name;
if(Student.find(name) != Student.end()){
    cout << "found\n";
    cout << Student[name] << endl;
}
else{
    cout << "student not found" << endl;
}
}
else if(operation == "DELETE"){
    string name;
    cin >> name;
    Student.erase(name);
}
}
return 0;
}
