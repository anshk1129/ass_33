#include<iostream>
using namespace std;
class Matrix{
    protected:
int arr[2][2];
public:
Matrix(){
    cout<<"Enter the elements in the matrix "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
}
};
class Determinant:public Matrix{
int result;
public:
Determinant():Matrix(){

}
void cal_determinant()
{
   result=(arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]);
}
void show(){
    cout<<"Determinant is "<<result<<endl;
}
};
int main(){
    Determinant d;
d.cal_determinant();
d.show();
return 0;
}