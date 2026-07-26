#include <iostream>
using namespace std;

//4. Write a program to convert float datatype number into integer and integer into float.

int main(){
    float float_datatype;
    int int_datatype;
    cout<<"Enter floating value = ";
    cin>>float_datatype;
    cout<<"Enter integer value = ";
    cin>>int_datatype;
    int converted_float = (int)float_datatype;
    float converted_int = (float)int_datatype;
    cout<<"Ater conversion of float into int = "<<converted_float<<"\n";
    cout<<"After conversion of int into float = "<<converted_int*1.01<<"\n";
    return 0;
}