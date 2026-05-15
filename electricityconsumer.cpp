#include <iostream>
#include <string>
using namespace std;

class ElectricityBill
{
private:
    int consumerID;
    string consumerName;
    float units;
    float bill;

public:

    // Function to input details
    void input()
    {
        cout << "Enter Consumer ID: ";
        cin >> consumerID;

        cin.ignore();

        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);

        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    // Function to calculate bill
    void calculateBill()
    {
        if(units <= 100)
        {
            bill = units * 5;
        }

        else if(units <= 200)
        {
            bill = (100 * 5) + ((units - 100) * 7);
        }

        else
        {
            bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        }
    }

    // Function to display bill
    void displayBill()
    {
        cout << "\n===== Electricity Bill =====\n";

        cout << "Consumer ID: " << consumerID << endl;

        cout << "Consumer Name: " << consumerName << endl;

        cout << "Units Consumed: " << units << endl;

        cout << "Total Bill: Rs. " << bill << endl;
    }
};

int main()
{
    ElectricityBill e;

    e.input();

    e.calculateBill();

    e.displayBill();

    return 0;
}