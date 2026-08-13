#include <iostream>
using namespace std;
//Write a program to add private members of two different classes.
class B;
class A{
    int x;
    public:
    void acc(){
        cout<<"Enter the value of x:";
        cin>>x;
    }
    friend void add(A a,B b);
};
class B{
    int y;
    public:
    void acc(){
        cout<<"Enter the value of y:";
        cin>>y;
    }
    friend void add(A a,B b);
};
void add(A a,B b){
    cout<<"The sum of x and y : "<<a.x+b.y<<endl;
}
int main(){
    A a;
    B b;
    a.acc();
    b.acc();
    add(a,b);
    return 0;
}