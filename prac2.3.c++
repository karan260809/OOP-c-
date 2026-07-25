#include <iostream>
using namespace std;
namespace physics {
    string subject_name = "physics";
}
namespace chemistry{
    string subject_name = "Chemistry";
}
int main(){
       cout<<"physics namespace = "<<physics ::subject_name<<endl;
       cout<<"chemistry namespace = "<<chemistry ::subject_name<<endl;
    return 0;
}