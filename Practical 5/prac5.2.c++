#include <iostream>
using namespace std;
//write an inline function to find the maximum of two number
inline int max(int n1,int n2){
    if(n1>n2){
        return n1;
    }else{
        return n2;
    }
}
int main(){
    int num1,num2;
    cout<<"Enter two number = ";
    cin>>num1>>num2;
    cout<<"Max number = "<<max(num1,num2)<<"\n";
    return 0;
}