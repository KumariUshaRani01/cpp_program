#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

bool isPalindrome(const string& str) {
string cleanStr;
    for (char ch : str) {
        if (isalnum(ch)) {
            cleanStr += tolower(ch);
        }
    }

    int left = 0;
    int right = cleanStr.length() - 1;

    while (left < right) {
        if (cleanStr[left] != cleanStr[right]) {
            return false; // Not a palindrome
        }
        ++left;
        --right;
    }

    return true; // Palindrome
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "\"" << input << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}
