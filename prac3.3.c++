#include <iostream>
using namespace std;

//9. Find the area of rectangle by casting double data into float and integer type.

int main(){
    double length, breadth;
    cout<<"Enetr length of rectangle = ";
    cin>>length;
    cout<<"Enter breadth of rectangle = ";
    cin>>breadth;
    float area_float = static_cast<float>(length) * static_cast<float>(breadth);
    int area_int = static_cast<int>(length) * static_cast<int>(breadth);
    cout<<"Area of rectangle (in float) = "<<area_float<<"\n";
    cout<<"Area of rectangle (in integer) = "<<area_int<<"\n";
    return 0;
}