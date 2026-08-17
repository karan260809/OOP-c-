#include <iostream>
using namespace std;
class custo{
    string name;
    float pincode;
    int rateing;
    public:
        void acc(){
            cout<<"Enter your pincode:";
            cin>>pincode;
            cout<<"Enter your name:";
            cin>>name;
            cout<<"Give rating to our store out of 5:";
            cin>>rateing;
        }
        void disp(){
           cout<<"Name :"<<name<<endl;
           cout<<"Addres in pincode :"<<pincode<<endl;
           cout<<"Rating to our store :"<<rateing<<endl;
        }
};
int main(){
    int n;
    cout<<"Enter number of customer:";
    cin>>n;
    custo b[n];
    for(int i=0 ; i < n ; i++){
        cout<<"Enter details of customer "<<(i+1)<<":"<<endl;
        b[i].acc();
    }
    cout<<"\n----------CUSTOMER DETAILS----------\n";
    for(int i=0;i < n ; i++){
        b[i].disp();
    }
    return 0;
}
