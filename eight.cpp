#include<iostream>
using namespace std;
class proof{
protected:
int b,p;
public:
proof(int x,int y){
b=x;p=y;
}
};
class Compute:public proof{
int h;
public:
Compute(int hh,int x,int y):proof(x,y){
h=hh;
}
void check(){
if(h*h==(b*b+p*p))
{
   cout<<"Valid "<<endl;
}
else{
    cout<<"Invalid ";
}
}
};
int main(){
    Compute c(29,21,20);
    c.check();
    return 0;
}