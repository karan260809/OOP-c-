#include <iostream>
using namespace std;
class employee{
    string name;
    int id;
    string dept;
    public:
        void acc(){
            cout<<"Enter your name:";
            cin>>name;
            cout<<"Enter your ID:";
            cin>>id;
            cout<<"Enter your department:";
            cin>>dept;
        }
        void disp(){
           cout<<"Name :"<<name<<endl;
           cout<<"ID :"<<id<<endl;
           cout<<"Department :"<<dept<<endl;
        }
};
int main(){
    int n;
    cout<<"Enter number of employee:";
    cin>>n;
    employee b[n];
    for(int i=0 ; i < n ; i++){
        cout<<"Enter details of employee "<<(i+1)<<":"<<endl;
        b[i].acc();
    }
    cout<<"\n----------EMPLOYEE DETAILS----------\n";
    for(int i=0;i < n ; i++){
        b[i].disp();
    }
    return 0;
}
