#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Student{
private:
int studentroll;
string studentname;
float studentmarks;
public:
void addstudent(){
    ofstream fout("student.txt", ios::app);
    cout << "enter student roll: ";
    cin >> studentroll;
    cin.ignore();
    cout << "enter student name: ";
    getline(cin, studentname);
    cout << "stduent marks; ";
    cin >> studentmarks;
    
    fout << studentroll << endl;
    fout << studentname << endl;
    fout << studentmarks << endl;
    fout.close();
    cout << "student added sucessfully!\n";
}
//search student using roll number
void searchstudent(){
ifstream fin("student.txt");
int r, roll;
string n;
float m;
cout << "enter roll no. to search";
cin >> roll;
bool found = false;
while(fin >> r){
    fin.ignore();
    getline(fin, n);
    fin >> m;
    if(r == roll){
        cout << "student found\n";
        cout << "roll no.: " << r << endl;
        cout << "name: " << n << endl;
        cout << "marks: "<< m << endl;
        found = true;
    }
}
if(!found){
    cout << "student not found\n";
}
fin.close();
}
//need to search topper thorugh marks
void displaytopper(){
ifstream fin("student.txt");
int r, rollno;
string n, topname;
float m, highest = -1;
while(fin >> r){
    fin.ignore();
    getline(fin, n);
    fin >> m;
    if(m > highest){
        highest = m;
        topname = n;
        rollno = r;
    }
}
cout << "topper roll no: "<< rollno << endl;
cout << "topper name: " << topname << endl;
cout << "topper marks: " << highest << endl;
fin.close();
}
};
int main(){
Student s;
int choice = 0;
do
    {
        cout << "\n===== Student Database System =====\n";

        cout << "1. Add Student\n";
        cout << "2. Search Student\n";
        cout << "3. Display Topper\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                s.addstudent();
                break;

            case 2:
                s.searchstudent();
                break;

            case 3:
                s.displaytopper();
                break;

            case 4:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice.\n";
        }

    } while(choice != 4);

return 0;
}