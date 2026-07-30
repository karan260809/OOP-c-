#include <iostream>
using namespace std;
int main(){
    int* ptr = new int ;
    cout<<"Enter number =";
    cin>> *ptr;
    cout<<"Number enterd ="<< *ptr <<endl;
    delete ptr;
    cout<<"so after clearing space  = "<< *ptr<<endl;
    return 0;
}
