#include <iostream>
using namespace std;
//Implement a friend function to display employee details.
class emp{
    int id;
    string name;
    float salary;
    public:
    void acc(){
        cout<<"Enter the employee id:";
        cin>>id;
        cout<<"Enter the employee name:";
        cin>>name;
        cout<<"Enter the employee salary:";
        cin>>salary;
    }
    friend void display(emp e);
};
void display(emp e){
    cout<<"-------Employee Details-------"<<endl;
    cout<<"Employee id:"<<e.id<<endl;
    cout<<"Employee name:"<<e.name<<endl;
    cout<<"Employee salary:"<<e.salary<<endl;
}
int main(){
    emp e1;
    e1.acc();
    display(e1);
    return 0;
}