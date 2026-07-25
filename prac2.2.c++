#include <iostream>
using namespace std;
class student{
     public:
     double roll_no;
     string name;
     float marks;
     
     void acc();
     void disp();
};
    void student ::acc(){
         cout<<"Enter name of student:";
         cin>>name;
         cout<<"Enter roll no:";
         cin>>roll_no;
         cout<<"Enter student marks:";
         cin>>marks;
   }
   void student ::disp(){
    cout<<"Student Name:"<< name <<endl;
    cout<<"Student Roll no:"<<roll_no <<endl;
    cout<<"Student Marks:"<<marks <<endl;
   }

int main(){
    student s1,s2;
    s1.acc();
    s2.acc();
    s1.disp();
    s2.disp();
    return 0;
}