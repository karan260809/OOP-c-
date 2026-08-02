#include <iostream>
using namespace std;
//Write a program to define a class student having data members name and roll no. Accept and display data for one object. Define the member function inside the class
class student{
string name;
double roll_no;
public:
void acc(){
    cout<<"Ente Student Details\n";
    cout<<"Enter stuednt name:";
    cin>>name;
    cout<<"Enter student roll_no:";
    cin>>roll_no;
}
void disp(){
    cout<<"--------Student Details--------\n";
    cout<<"Student Name = "<<name<<endl;
    cout<<"Student Roll_no = "<<roll_no<<endl;
}
};
int main(){
    student s1;
    s1.acc();
    s1.disp();
    return 0;
}