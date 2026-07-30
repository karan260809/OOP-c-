#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double marks[5];
    cout<<"Enter marks of 5 subjects \n";
    for (int i = 0; i < 5; i++)
    {
        cout<<"Subject "<< i+1 <<": ";
        cin>>marks[i];
    }
    cout<<" subject marks \n";
    for (int i = 0 ; i<5 ;i++){
        cout<<"Subject "<<( i + 1)<<setw(10)<< right << marks[i]<<endl;
    }
    return 0;
}
