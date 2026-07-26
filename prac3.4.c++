#include <iostream>
using namespace std;

//Write a c++ code to create a class staff having data members as id and post. Accept and display data for 2 staff. Write member function definition inside the class.

class staff{
public:
    int id;
    string post;
    void acc(){
        cout<<"Enter id of staff = ";
        cin>>id;
        cout<<"Enter post of staff = ";
        cin>>post;
    }
    void disp(){
        cout<<"Id of staff = "<<id<<"\n";
        cout<<"Post of staff = "<<post<<"\n";
    }
};
int main(){
   staff s1,s2;
    s1.acc();
    s2.acc();
    cout<<"\n";
    s1.disp();
    s2.disp();

    return 0;
}