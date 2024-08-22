#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    getline(cin, input);

    int left = 0;
    int right = input.length() - 1;

    while (left < right) {
        if (input[left] != input[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        cout << "\"" << input << "\" is a palindrome." << endl;
    } else {
       cout << "\"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}
