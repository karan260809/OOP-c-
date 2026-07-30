#include <iostream>
using namespace std;
int main(){
    double a,b,c;
    cout << "Enter two numbers = ";
    cin >> a >> b;
    cout <<"Before swapping A = " << a <<" B = " << b ;
    c = b;
    b = a;
    a = c;
    cout <<"\nAfter swapping A = " << a <<" B = " << b ;
    return 0;
}
