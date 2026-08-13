#include <iostream>
using namespace std;
//Write a program to find the maximum of two numbers using a friend function.
class max_number {
private:
int x,y;
public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> x >> y;
    }
    friend void maximum(max_number m);
};
void maximum(max_number m) {
    if (m.x > m.y) {
        cout << "Max number is: " << m.x << endl;
    } else {
        cout << "Max number is: " << m.y << endl;
    }
}
int main() {
    max_number m1;
    m1.input();     
    maximum(m1);
    return 0;
}
