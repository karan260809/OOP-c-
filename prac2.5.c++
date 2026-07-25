#include <iostream>
using namespace std;
int main(){
    double n,sum = 0;
    cout<<"Enter number of elements = ";
    cin>>n;
    double *arr = new double[n];
    cout<<"Enter "<<n<<" numbers:";
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
        sum += arr[i];
    }
        double avg = sum/n;
        cout<<"Sum = "<<sum<<endl;
        cout<<"Avg = "<<avg<<endl;
        delete []arr;
    return 0;
}