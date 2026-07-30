#include <iostream>
using namespace std;
//Write a program to calculate square of number in which define class and define member function inside the class as per requirement.
class square {
    public:
    double num;
    void acc_data(){
        cout<<"Enter number = ";
        cin>>num;
    }
    void disp_data(){
        cout<<"Square of number = "<<num*num*num<<endl;
    }

};
int main (){
square s1;
s1.acc_data();
s1.disp_data();
    return 0;
}
