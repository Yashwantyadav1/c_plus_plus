#include<iostream>
using namespace std;

int solve(int dividend, int divisor) {
    int s = 0;
    int e = abs(dividend);
    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s <= e) {
        if (abs(mid * divisor) == abs(dividend)) {
            ans = mid;
            break;
        }
        if (abs(mid * divisor) > abs(dividend)) {
            e = mid - 1;
        }
        else {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    // Handle the signs of the result
    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0)) {
        return ans;
    } else {
        return -ans;
    }
}

int main() {
    int dividend = -21;
    int divisor = 7;
    int ans = solve(dividend, divisor);
    cout << "Ans is : " << ans << endl;
}
