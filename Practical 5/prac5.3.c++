#include <iostream>
using namespace std;
//write an inline fuction to calculate teh area of a circle
inline float area(float r){
    return 3.14*r*r;
}
int main(){
    float radius;
    cout<<"Enter radius of circle = ";
    cin>>radius;
    cout<<"Area of circle = "<<area(radius)<<"\n";
    return 0 ;
}