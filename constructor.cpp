#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called!" << endl;
        // Initialize data members or perform setup here
    }

};

int main() {
    MyClass myObject;

    return 0;
}
