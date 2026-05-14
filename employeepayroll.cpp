//generate employee payroll using inheritance
#include <iostream>
#include <string>
using namespace std;
class employee{
protected:
string name;
int id;
float basicsalary, bonus, tax;
public:
void employeedetails(){
    cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Basic Salary: ";
        cin >> basicsalary;

        cout << "Enter Bonus: ";
        cin >> bonus;

        cout << "Enter Tax: ";
        cin >> tax;
}
};
class Manager : public employee{
protected:
float netsalary;
public:
void calculatesalary(){
    // Managers get extra allowance
        netsalary = basicsalary + bonus + 5000 - tax;
}
void display(){
    cout << "\n===== Manager Details =====\n";

        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;

        cout << "Net Salary: " << netsalary << endl;
}
};
class developer : public employee{
protected:
float netsalary;
public:
  void calculateSalary()
    {
        // Developers get project incentive
        netsalary = basicsalary + bonus + 3000 - tax;
    }

    void display()
    {
        cout << "\n===== Developer Details =====\n";

        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;

        cout << "Net Salary: " << netsalary << endl;
    }
};
int main(){
Manager m;
developer d;
cout << "enter manager details: \n";
cin.ignore();
m.employeedetails();
m.calculatesalary();
m.display();
 cout << "\n\nEnter Developer Details\n";

cin.ignore();
d.employeedetails();
d.calculateSalary();
d.display();
return 0;
}