#include <iostream>
//runtime polymorphism
using namespace std;
class Shape{
public:
virtual void area(){
    cout << "area function shape calculator\n";
}
};
class Circle : public Shape{
private:
float radius;
public:
Circle(float r){
    radius = r;
}
void area(){
    float result;
    result = (3.14 * radius * radius);
    cout << "area of circle: " << result << endl;
}    
};
class Rectangle : public Shape{
private:
float length, breadth;
public:
Rectangle(float l, float b){
    length = l;
    breadth = b;
}
void area(){
    float result;
    result = length * breadth;
    cout << "area of rectangle: " << result << endl;
}
};
class Triangle : public Shape{
private:
float base, height;
public:
Triangle(float b, float h){
    base = b;
    height = h;
}
void area(){
    float result;
    result = 0.5 * base * height;
    cout << "area of triangle: " << result << endl;
}
};
int main(){
Shape *s;

//Runtime polymorphism
Circle c(56.7);
s = &c;
s->area();

Rectangle r(43, 9.7);
s = &r;
s->area();

Triangle t(12, 89);
s = &t;
s->area();
return 0;
}
