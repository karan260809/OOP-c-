#include <iostream>
using namespace std;
//write an inline function to swap two numbers
inline void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x = 5, y = 10;
    cout<<"Before swapping: x = "<<x<<" y = "<<y<<"\n";
    swap(x, y);
    cout<<"After swapping: x = "<<x<<" y = "<<y<<"\n";
    return 0;
}