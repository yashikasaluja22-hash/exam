/*A virtual function in C++ is used for runtime polymorphism.
Matlab agar parent class ka pointer child class object ko point kare, aur function virtual ho, toh child class wala function call hota hai instead of parent one.

//virtual function is used only in parent class always
Simple words me:

“Function call runtime pe decide hota hai based on actual object.”*/
/*#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks\n";
    }
};

int main() {

    Animal* a;
    Dog d;

    a = &d;

    a->sound();

    return 0;
}*/
// OUTPUT OF ABOVE CODE: Animal sound
// why? kyunki yahan code logic ye lagata hai ki jo 'a' hai woh toh animal (parent class) ko belobg karta hai
//toh ussi ka function call hoga

#include <iostream>
using namespace std;
class Animal{
public:
virtual void sound(){
    cout << "animal barks\n";
}
};
class dog : public Animal{
public:
void sound(){
   cout << "dog barks\n";
}
};
int main(){
Animal *a;
dog d;
a = &d;
a->sound();
return 0;
}
//yahan due to virtual function compiler dusra logic lagata hai
//ki 'a' ko jis object ke equal kiya hai compiler uss object(child class) ke function ko call karta hai
