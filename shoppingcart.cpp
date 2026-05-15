#include <iostream>
#include <vector>
#include <string>
//inheritance used here
using namespace std;
//parent class
class Product{
protected:
int productid;
string productname;
int productquan;
float productprice;
public:
Product(int id, string name, int quan, float price){
    productid = id;
    productname = name;
    productquan = quan;
    productprice = price;
}
void displayproduct(){
    cout << "product id: " << productid << endl;
    cout << "product name: " << productname << endl;
    cout << "product quantity: " << productquan << endl;
    cout << "product price: " << productprice << endl;
}
int getproductid(){
    return productid;
}
float calulatebill(){
    float result = productprice * productquan;
    return result;
}
};
class Cart : public Product{
private:
vector<Product> items;
public:
Cart() : Product(0, " ", 0, 0){
}
//add item or product in items vector
void additem(Product p){
    items.push_back(p);
    cout << "item added succesfuly!\n";
}
void removeitem(int id){
bool found = false;
for(int i = 0; i < items.size(); i++){
    if(items[i].getproductid() == id){
     items.erase(items.begin() + i);
     found = true;
     cout << "item removes sucesfuly!\n";
     break;
    }
}
if(!found){
    cout << "item not found!\n";
}
}
void totalbill(){
    float total = 0;
    for(int i = 0; i < items.size(); i++){
        total += items[i].calulatebill();
        cout << "total bill" << total << endl;
    }
}
void displayitems(){
    if(items.empty()){
        cout << "no itmes, list empty\n";
    }
    else{
        for(int i = 0; i < items.size(); i++){
            cout << "details of products\n";
            items[i].displayproduct();
        }
    }
}
};
int main() {
Cart cart;
int choice = 0;
  do
    {
        cout << "\n===== Online Shopping Cart =====\n";

        cout << "1. Add Item\n";
        cout << "2. Remove Item\n";
        cout << "3. Display Cart\n";
        cout << "4. Calculate Bill\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            int id, quantity;
            string name;
            float price;

            cout << "Enter Product ID: ";
            cin >> id;

            cin.ignore();

            cout << "Enter Product Name: ";
            getline(cin, name);

            cout << "Enter Product Price: ";
            cin >> price;

            cout << "Enter Quantity: ";
            cin >> quantity;

            Product p(id, name, price, quantity);

            cart.additem(p);
        }

        else if(choice == 2)
        {
            int id;

            cout << "Enter Product ID to remove: ";
            cin >> id;

            cart.removeitem(id);
        }

        else if(choice == 3)
        {
            cart.displayitems();
        }

        else if(choice == 4)
        {
            cart.totalbill();
        }

        else if(choice == 5)
        {
            cout << "\nExiting Program...\n";
        }

        else
        {
            cout << "\nInvalid Choice.\n";
        }

    } while(choice != 5);
return 0;
}