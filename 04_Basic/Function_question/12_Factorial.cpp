#include <iostream>
using namespace std;

int fact(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {  // Correct loop initialization and condition
        fact = fact * i;           // Correct factorial calculation
    }
    return fact;
}

int main() {
    int n;
    cin >> n;
    int ans = fact(n);
    cout << ans;
    return 0;  // Added return 0 for good practice in main function
}
