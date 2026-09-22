#include <iostream>
using namespace std;

class ObjectCounter {
private:
    static int c; 

public:
    ObjectCounter() {
        c++;
    }
    static int getCount() {
        return c;
    }
};

int ObjectCounter::c = 0;

int main() {
    ObjectCounter c1, c2, c3;
        cout << "Number of objects created: " << ObjectCounter::getCount() << endl; 
    
    return 0;
}
