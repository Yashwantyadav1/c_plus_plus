#include <iostream>
using namespace std;

string decimalToBinary(int n) {
    string binary = "";
    while (n > 0) {
        binary = to_string(n & 1) + binary; // Prepend the bit
        n >>= 1; // Right shift
    }
    return binary.empty() ? "0" : binary; // Return "0" if n was 0
}

int main() {
    int n;
    cin >> n;
    string binary = decimalToBinary(n);
    cout << binary << endl;
}
