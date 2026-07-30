#include <iostream>
using namespace std;
int main() {
    double a,b;
    cout << "Enter two numbers = ";
    cin >> a >> b;
    cout <<"Before swapping A = " << a <<" B = " << b ;
    a = a+b;
    b = a-b;
    a = a-b;
    cout <<"\nAfter swapping A = " << a <<" B = " << b ;
    return 0;

}
