#include <iostream>
using namespace std;
//Write a program using a friend function to compare two objects.
class com{
    int a;
    public:
    void acc(){
        cout<<"Enter the value of a:";
        cin>>a;
    }
    friend void comp(com c1,com c2);
};
void comp(com c1,com c2){
    if(c1.a>c2.a){
        cout<<"the value of first object is greter "<<endl;
    }else if(c1.a<c2.a){
        cout<<"the value of second object is greter "<<endl;
    }else{
        cout<<"both objects are equal"<<endl;
    }
}

int main(){
    com c1,c2;
    c1.acc();
    c2.acc();
    comp(c1,c2);
    return 0;
}
