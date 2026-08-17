#include <iostream>
using namespace std;
//develop a program to store and display library book records
class library{
    float price;
    int id;
    public:
        void acc(){
            cout<<"Enter the ID of book:"<<endl;
            cin>>id;
            cout<<"Enter the price of book:"<<endl;
            cin>>price;
        }
        void disp(){
           
            cout<<"ID of book:"<<id<<endl;
            cout<<"Price of book:"<<price<<endl;
        }
};

int main() 
{   int n;
    cout<<"Enter number of books:";
    cin>>n;
    library b[n];
    for(int i=0 ; i < n ; i++){
        cout<<"Enter details for book no:"<<(i+1)<<endl;
        b[i].acc();
    }
    cout<<"\n----------BOOK DETAILS----------\n";
    for(int i=0;i < n ; i++){
        b[i].disp();
    }
    return 0;
}
