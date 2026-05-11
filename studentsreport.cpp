#include <iostream>
#include <string>
using namespace std;
class Student{
private:
string name;
int roll;
float marks[5];
float total;
float percentage;
public:
void details(){
    cout << "enter name: " << endl;
    getline(cin, name);
    cout << "Enter roll no: " << '\n';
    cin >> roll;
    total = 0;
    cout << "enter marks of subjects: " << '\n';
    for(int i = 0; i < 5; i++){
        cout << "subject " << "i+1" << '\n';
        cin>>marks[i];
        total += marks[i];
    }
}
void result(){
    cout << "total: " << total <<'\n';
    percentage = (float)(total / 500)*100;
    cout << "percenyage: " << percentage << '\n';  
}
void displaygrade(){
if(percentage >= 90){
    cout << "Grade A" << '\n';
}
else if(percentage >= 75){
    cout << "Grade B" << '\n';
}
 else if(percentage >= 50)
        {
            cout << "Grade: C" << endl;
        }
        else
        {
            cout << "Result: Fail" << endl;
        }
}
};
int main(){
Student s1;
s1.details();
s1.result();
s1.displaygrade();
return 0;
}