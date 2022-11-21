#include<iostream>
using namespace std;
class Volume{
    protected:
double l;
public:
void set_data(double a){
l=a;
}
virtual void display_volume()=0;
};
class Cube:public Volume{
public:
void display_volume(){
    cout<<"\n Volume of cube is  "<<l*l*l;
}
};
class Sphere:public Volume{
public:
void display_volume(){
    cout<<"\n Volume of sphere is  "<<((4/3)*3.14*l*l*l);
}
};
int main(){
    Cube c;
    Sphere s;
    c.set_data(10.23);
    s.set_data(12.23);
    c.display_volume();
    s.display_volume();
    return 0;
}