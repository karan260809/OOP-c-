#include <iostream>
using namespace std;
int main(){
    float P,R = 9,T,I;
    cout<<"Enter principal amount = "  ;
    cin>>P;
    cout<<"Enter time in years = "  ;
    cin>>T;
    I = (P*T*R)/100;
    cout << "smiple interst = "<< I;
    return 0;
}
