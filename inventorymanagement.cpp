#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
    int productID;
    int quantity;
    float price;

public:

    // Function to input product details
    void inputProduct()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price per Item: ";
        cin >> price;
    }

    // Function to update stock
    void updateStock()
    {
        int newStock;

        cout << "Enter quantity to add: ";
        cin >> newStock;

        quantity += newStock;

        cout << "Stock updated successfully.\n";
    }

    // Function to calculate bill
    void calculateBill()
    {
        float bill;

        bill = quantity * price;

        cout << "\nTotal Bill: " << bill << endl;
    }

    // Function to display low stock warning
    void displayLowStock()
    {
        if(quantity < 10)
        {
            cout << "\nLow Stock Warning!\n";
            cout << "Only " << quantity << " items left.\n";
        }
        else
        {
            cout << "\nStock level is sufficient.\n";
        }
    }

    // Function to display product details
    void displayProduct()
    {
        cout << "\n===== Product Details =====\n";

        cout << "Product ID: " << productID << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Product p;

    p.inputProduct();

    p.displayProduct();

    p.updateStock();

    p.displayProduct();

    p.calculateBill();

    p.displayLowStock();

    return 0;
}