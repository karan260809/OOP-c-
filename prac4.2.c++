#include <iostream>
using namespace std;
//Write a program to store and display student information using functions defined outside the class.
class student {
    public:
    string name;
    int roll_no;
    int class_name;
    
    void acc_data();
    void disp_data();
};
void student::acc_data(){
    cout<<"Enter name of student = ";
    cin>>name;
    cout<<"Enter roll_no of student = ";
    cin>>roll_no;
    cout<<"Enter class of student = ";
    cin>>class_name;
}
void student::disp_data(){
    
    cout<<"Student Name = "<<name<<endl;
    cout<<"Student Roll_no = "<<roll_no<<endl;
    cout<<"Student class = "<<class_name<<endl;

}
int main() { 
    student s1,s2;
    s1.acc_data();
    s2.acc_data();
    cout<<"\n";
    cout<<"Student Information"<<endl;
    s1.disp_data();
    s2.disp_data();
    return 0;
}