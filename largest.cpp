#include <iostream>
using namespace std;

int main() {
    
    int num1, num2, num3;

    
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    int largest = num1;

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    // Display the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;
}
