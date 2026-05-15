#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class BankAccount{
private:
int accountno;
string accountname;
float balance;
public:
//function to create account
void createaccount(){
cout << "Enter account no.: ";
cin >> accountno;
cin.ignore();
cout << "Enter Account name: ";
getline(cin, accountname);
cout << "Enter intial balance:";
cin >> balance;
}
//to deposit amount
void deposit(){
float amount;
cout << "enter amount to deposit";
cin >> amount;
if(amount > 0){
    balance += amount;
    cout << "amount added successfully!";
}
else{
    cout << "invalid input" << '\n';
}
}
void withdraw(){
float amount;
cout << "enter amount to withdraw";
cin >> amount;
if(amount <= balance){
    balance -= amount;
    cout << "amount withdrawn successfully!";
}
else{
    cout << "invalid input" << '\n';
}
}
void savetofile(){
ofstream fout("hello.txt", ios::app);
fout << accountno << endl;
fout << accountname << endl;
fout << balance << endl;
fout.close();
}
//to display data
void display(){
cout << "bank account details\n";
 cout << "Account Number: " << accountno << endl;
cout << "Account Holder: " << accountname << endl;
cout << "Balance: " << balance << endl;
}
//read from file
void readfile(){
int accno;
string accname;
int accbalance;
ifstream fin("hello.txt");
while(fin >> accno){
fin.ignore();
getline(fin, accname);
fin >> accbalance;
cout << "\nAccount Number: " << accno << endl;
cout << "Name: " << accname << endl;
cout << "Balance: " << accbalance << endl;
}
fin.close();
}
};
int main() {
BankAccount b;
int choice = 0;
do{
 cout << "\n===== Banking System =====\n";

        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account\n";
        cout << "5. Save Account to File\n";
        cout << "6. Read Accounts from File\n";
        cout << "7. Exit\n";
cout << "enter choice";
cin >> choice;
switch(choice){
    case 1:
    b.createaccount();
    break;
    case 2:
    b.deposit();
    break;
    case 3:
    b.withdraw();
    case 4:
    b.display();
    break;
    case 5:
    b.savetofile();
    break;
    case 6:
    b.readfile();
    break;
    case 7: 
    cout << "exiting program...\n";
    break;
    default:
    cout << "invalid input\n";
}
}while(choice != 7);
return 0;
}