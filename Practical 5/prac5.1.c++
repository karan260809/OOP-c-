#include <iostream>
using namespace std;
//Write a program to calculate the cube of a number using an inline function.
inline int cube(int n){
    return n*n*n;
}
int main(){
    int num;
    cout<<"Enetr number = ";
    cin>>num;
    cout<<"Cube of number = "<<cube(num)<<"\n";
    return 0;
}
