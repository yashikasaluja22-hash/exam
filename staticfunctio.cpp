/*In C++, static function (or static member function) ek aisi function hoti hai jo object se nahi,
 ,class se belong karti hai.
Normal member functions ko call karne ke liye object chahiye hota hai.

But static function ko:

ClassName::functionName()

se directly call kar sakte ho.*/
/*. Basic Syntax
class Demo
{
public:
    static void show()
    {
        cout << "Hello";
    }
};

Call:

Demo::show();
3. Full Example
#include <iostream>
using namespace std;

class Student
{
public:
    static void greet()
    {
        cout << "Welcome Students" << endl;
    }
};

int main()
{
    Student::greet();
}
Output
Welcome Students*/
#include <iostream>
using namespace std;
class Student{
    private:
    int id;
    public:
    static int count;
    Student(){
        count++;
    }
    static void show(){
      cout << "total objects: " << count << endl;
    }
};
int Student::count = 0;
int main() {
Student s1;
Student s2;
Student s3;
Student::show();
return 0;
}