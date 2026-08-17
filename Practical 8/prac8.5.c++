#include <iostream>
using namespace std;
//WAP to create a class staff having data member as name,post and salary.Accept data for 5
//staff and display the staff details having post = “HOD”
class staff{
    public:
    string name;
    string post;
    float salary;
    void acc(){
        cout<<"Enter the name of staff :";
        cin>>name;
        cout<<"Enter the post of staff :";
        cin>>post;
        cout<<"Enter the salary of staff :";
        cin>>salary;
    }
    void disp(){
        cout<<"Staff Name:"<<name<<endl;
        cout<<"Staff Post:"<<post<<endl;
        cout<<"Staff Salary:"<<salary<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the number of staff:";
    cin>>n;
    staff s[n];
    for(int i=0;i<n;i++){
        s[i].acc();
    }
    cout<<"---------staff having post as HOD---------"<<endl;

    for(int i=0;i<n;i++){
        if(s[i].post=="HOD"){
            s[i].disp();
        }
    }
}