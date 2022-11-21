#include<iostream>
using namespace std;
class Shape{
    protected:
double l,b;
public:
void set_data(double a,double b1=0){
l=a;
b=b1;
}
virtual void display()=0;
};
class Square:public Shape{
public:
void display(){
    cout<<"\n Area of Square is  "<<l*l;
}
};
class Parallelogram:public  Shape{
public:
void display(){
    cout<<"\n Area of Parallelogram is  "<<l*b;
}

};
int main(){
    Square r;
    Parallelogram t;
    r.set_data(10.23);
    t.set_data(12.23,32.11);
    r.display();
    t.display();
    return 0;
}