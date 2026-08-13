#include <iostream>
using namespace std;
//Write a program to calculate the average using a friend function.
class avg{
    int a,b;
    public:
    void acc(){
        cout<<"Enter the value of a and b:";
        cin>>a>>b;
    }
    friend void average(avg a1);
};
void average(avg a1){
    cout<<"The avg of a and b:"<<float((a1.a+a1.b))/2<<endl;
}
int main(){
    avg a1;
    a1.acc();
    average(a1);
    return 0;
}
