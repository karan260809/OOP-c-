#include <iostream>
using namespace std;
//5. Write a program to calculate the area of a rectangle using functions defined outside the class.
class rectangle{
    public:
    double l,b;
    void acc_data();
    void disp_data();
};
void rectangle::acc_data(){
    cout<<"Enter length of rectangle = ";
    cin>>l;
    cout<<"Enter weight of rectangle = ";
    cin>>b;

}
void rectangle::disp_data(){
  cout<<"Area of rectangle = "<<l*b<<endl;

}
int main(){
    rectangle r1;
    r1.acc_data();
    r1.disp_data();
    return 0;
}
