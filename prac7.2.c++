#include <iostream>
using namespace std;
//WAP to calculate weight of object at different planets, using formula Weight = m x g   where m = mass of object and g = gravitational force. Declare m as static member variable.
class weight{
    static float m;
    float g ;
    public:
    void acc(){
        cout<<"Enter mass of object: ";
        cin>>m;
        cout<<"Enter gravitational force: ";
        cin>>g;
    }
    void cal(){
        float w = m * g;
        cout<<"Weight of object : "<<w<<endl;
    }

};
float weight::m = 0;
int main(){
    weight w;
    w.acc();
    w.cal();
    return 0;
}
