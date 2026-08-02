#include <iostream>
using namespace std;
//Develop a class Account to accept account details and display the balance using functions defined outside the class.
class account{
    public:
    double acc_no;
    string name;
    double balence;
    public:
    void acc();
    void disp();
};
void account::acc(){
    cout<<"Enter Account number:";
    cin>>acc_no;
    cout<<"Enter Account holder name:";
    cin>>name;
    cout<<"Enter account balence:";
    cin>>balence;
}
void account::disp(){
    cout<<"Account details\n";
    cout<<"Remening balence:"<<balence<<endl;
}
int main(){
    account a1;
    a1.acc();
    a1.disp();
    return 0;
}