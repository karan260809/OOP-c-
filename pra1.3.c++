#include <iostream>
using namespace std;
int main(){
    double l,b,area,peri;
    cout <<"enter the length and breadth of rectangle = ";
    cin >> l >> b;
    area = l*b;
    peri = 2*(l+b);
    cout <<"area of rectangle = " << area;
    cout <<"\nperimeter of rectangle = " << peri;
    return 0;
}