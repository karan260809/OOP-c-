#include<iostream>
using namespace std;
//WAP to define a class SI having data members as principal, duration, and rate of interest. Declare rate of interest as static member variable. Calculate the SI and display it
class SI{
    static float r;
    float p, t;
    public:
    void acc(){
        cout<<"Enter principal and duration: ";
        cin>>p>>t;
    }
    void cal(){
        float si = (p * t * r) / 100;
        cout<<"Simple interest : "<<si<<endl;
    }

};
float SI::r = 10.5;
int main(){
    SI s;
    s.acc();
    s.cal();
    return 0;
}

