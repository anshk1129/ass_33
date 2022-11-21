#include<iostream>
using namespace std;
class Base{
    protected:
double l,b;
public:
void set_data(double a,double b1=0){
l=a;
b=b1;
}
virtual void display()=0;
};
class Rectangle:public Base{
public:
void display(){
    cout<<"\n Area of rectangle is  "<<l*b;
}
};
class Triangle:public Base{
public:
void display(){
    cout<<"\n Area of triangle is  "<<0.5*l*b;
}
};
int main(){
    Rectangle r;
    Triangle t;
    r.set_data(10.23,23.98);
    t.set_data(12.23,32.11);
    r.display();
    t.display();
    return 0;
}