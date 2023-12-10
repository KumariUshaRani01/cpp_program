#include <iostream>
using namespace std;

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a non-negative integer." << std::endl;
    } else {
        unsigned long long result = factorial(num);
        cout << "Factorial of " << num << " is: " << result << std::endl;
    }

    return 0;
}
