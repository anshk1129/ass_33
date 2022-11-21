#include<iostream>
using namespace std;
class Swap{
    int x;
    public:
    Swap(int val){
        x=val;
    }
    void show(){
        cout<<"\n before swap first object value  = "<<x;
    }
void show1(){
       cout<<"\n before swap second object value  = "<<x;
}
 void show2(){
        cout<<"\n After swap first object value  = "<<x;
    }
void show3(){
       cout<<"\n After swap second object value  = "<<x;
}
friend void swap(Swap *y,Swap *z);
};
void swap(Swap *y,Swap *z){
int temp;
temp=y->x;
y->x=z->x;
z->x=temp;
}
int main(){
    Swap s(10),s1(20);
    s.show();
    s1.show1();
    swap(&s,&s1);
    s.show2();
    s1.show3();

    return 0;
}