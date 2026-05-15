#include <iostream>
#include <string>
using namespace std;
class Patient{
protected:
int patientid;
string patientname; 
int patientage;
public:
Patient(int id, string name, int age){
    patientid = id;
    patientname = name;
    patientage = age;
}
};
class Doctor : public Patient{
private:
string doctorname;
string specialization;
public:
Doctor(int idd, string pname, int page, string docname, string special) : Patient(idd, pname, page){
doctorname = docname;
specialization = special;
}
void display(){
cout << "record patient" << '\n';
cout << "patient id: " << patientid << '\n';  
cout << "patient name: " << patientname << '\n';    
cout << "patient age: " << patientage << '\n';
cout << "doctor assigned: " << doctorname << '\n';
cout << "speacilization: " << specialization << '\n';  
}
};
int main() {
int idd, page;
string pname, docname, special;
cout << "enetr patient id: ";
cin >> idd;
cin.ignore();
cout << "enter patient name: ";
getline(cin, pname);
cout << "enter patient age: ";
cin >> page;
cin.ignore();
cout << "assign doctor: ";
getline(cin, docname);
cout << "specailization: ";
cin >> special;
Doctor d(idd, pname, page, docname, special);
d.display();
return 0;
}