#include <iostream>
using namespace std;
/* WAP to create a class student having data members as roll-no,name and percentage.Accept
data for 10 students and display names of students having percentage greater than 75. */

class student{
    public:
    int roll_no;
    string name;
    float percent;
    void acc(){
        
        cout<<"Enter the name of student :";
        cin>>name;
        cout<<"Enter Roll no of student :";
        cin>>roll_no;
        cout<<"Enter Percentage achieved in 10th class:";
        cin>>percent;
    }
    void disp(){
        cout<<"Student Name:"<<name<<endl;
        cout<<"Student Roll_no:"<<roll_no<<endl;
        cout<<"Percentage:"<<percent<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the number of students:";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
        s[i].acc();
    }
    cout<<"---------students having percentage greater than 75---------"<<endl;

    for(int i=0;i<n;i++){
        if(s[i].percent>75){
            s[i].disp();
        }
    }

    return 0;
}