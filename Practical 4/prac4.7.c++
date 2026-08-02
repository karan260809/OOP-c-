#include <iostream>
using namespace std;
//Create a class Product to store product information and display the details using functions defined outside the class.
class product{
    double price;
    int quantity;
    public:
    void set_price();
    void set_quantity();
    void disp();
};
void product::set_price(){
    cout<<"Enter the price of the product: ";
    cin>>price;
}void product::set_quantity(){
    cout<<"Enter the quantity of product: ";
    cin>>quantity;
}
void product::disp(){
    cout<<"Price: "<<price<<endl;
    cout<<"Quantity: "<<quantity<<endl;
}
int main(){
    product p;
    p.set_price();
    p.set_quantity();
    p.disp();
    return 0;
}