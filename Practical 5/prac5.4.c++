#include <iostream>
using namespace std;
//write an inline function to calculate simple intrest
inline double intrest(double P,double Y,double R){
    return (P*R*Y)/100;
}
int main(){
    double year;
    double rate = 18;
    double prin;
    cout<<"Enter principle and time period = ";
    cin>>prin>>year;
    cout<<"Simple intrest = "<<intrest(prin,year,rate)<<"\n";
    return 0;
}