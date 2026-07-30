#include <iostream>
using namespace std;

//7. Write a c++ code to create a class which calculates area of a circle.

class area_circle{
public:    
double R;
void gate_radius(){
cout<<"Enter radius of circle = ";
cin>>R;
}
void area(){
    double area_circle = 3.14*R*R;
    cout<<"Area of circle = "<<area_circle<<"\n";

}

};
int main(){
    area_circle c1;
    c1.gate_radius();
    c1.area();
    return 0;
}
