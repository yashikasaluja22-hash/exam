#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Book{
private:
int bookid;
string author;
string title;
bool issued;
public:
Book(int id, string a, string b){ //constructor like addbook() function
    bookid = id;
    author = a;
    title = b;
    issued = false;
}
//dislpay book details and issue status
void displaybook(){
    cout << "book id: " << bookid << '\n';
    cout << "author: " << author << '\n';
    cout << "book title: "<< title << '\n';
    if(issued){
        cout << "Status: issued" << '\n';
    }
    else{
    cout << "Status: NOT issued" << '\n';    
    }
}
//to issue book
void issuebook(){
if(!issued){
    cout << "book issued successfully!" << '\n';
    issued = true;
}
else{
   cout << "book already issued!" << '\n'; 
}
}
//to search a book
bool searchbook(string searchtitle){
    return title == searchtitle;
} 
};
int main(){
vector<Book> library;
int choice = 0;
do{
    cout << "library managemnet system" << '\n';
    cout << "select a choice(1-5)" << '\n';
  cout << "1. Add Book\n";
        cout << "2. Search Book\n";
        cout << "3. Issue Book\n";
        cout << "4. Display All Books\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;
cin.ignore();
if(choice == 1){
    int bookid;
    string author, title;
    cout << "Enter book id: ";
    cin >> bookid;
    cin.ignore();
    cout << "Enter book name";
    getline(cin, title);
    cout << "enter author name: ";
    getline(cin, author);
    library.push_back(Book(bookid, author, title));
    cout << "book added successfully\n";
}
if(choice == 2){
    string searchtitle;
    bool found = false;
    cout << "Enter title to search: ";
            getline(cin, searchtitle);
    for(int i = 0; i < library.size(); i++){
      if(library[i].searchbook(searchtitle)){
        found = true;
        cout << "book found\n";
        library[i].displaybook();
      }
    }
    if(!found){
        cout << "book not found'\n";
    }
}
if(choice == 3){
    string searchtitle;
    bool found = false;
     cout << "Enter title to search: ";
            getline(cin, searchtitle);
    for(int i = 0; i < library.size(); i++){
      if(library[i].searchbook(searchtitle)){
        found = true;
        library[i].issuebook();
      }
    }
    if(!found){
        cout << "book not found'\n";
    }
}
  else if(choice == 4)
        {
            if(library.empty())
            {
                cout << "\nNo books available.\n";
            }
            else
            {
                cout << "\n===== Book List =====\n";

                for(int i = 0; i < library.size(); i++)
                {
                    library[i].displaybook();
                }
            }
        }
   else if(choice == 5)
        {
            cout << "\nExiting program...\n";
        }

        else
        {
            cout << "\nInvalid choice.\n";
        }

}while(choice != 5);
return 0;
}
