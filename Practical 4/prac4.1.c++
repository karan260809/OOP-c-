#include <iostream>
using namespace std;
//Write a program to calculate the volume of a box using functions defined outside the class
class box{
    public:
double leng,weig,heig;
void acc_data();
void disp_data();
};
void box::acc_data(){
    cout<<"Enter the length of box = ";
    cin>>leng;
    cout<<"Enter the weigth of box = ";
    cin>>weig;
    cout<<"Enter the height of box = ";
    cin>>heig;
}
void box::disp_data(){
    cout<<"The volume of box = "<<leng*weig*heig<<endl;
}
int main(){
    box b1;
    b1.acc_data();
    b1.disp_data();
    return 0;
}
