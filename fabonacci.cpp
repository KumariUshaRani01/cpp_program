#include <iostream>
using namespace std;

// Function to generate Fibonacci sequence up to n terms
void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    cout << "Fibonacci sequence up to " << n << " terms:" << endl;

    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        cout << next << " ";
    }

    cout << endl;
}

int main() {
    int numTerms;

    // Prompt the user to enter the number of terms
    cout << "Enter the number of Fibonacci terms to generate: ";
    cin >> numTerms;

    // Check if the entered number of terms is valid
    if (numTerms <= 0) {
        cout << "Please enter a positive integer for the number of terms." << endl;
    } else {
        // Generate and display the Fibonacci sequence
        generateFibonacci(numTerms);
    }

    return 0;
}
