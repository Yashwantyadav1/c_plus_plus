#include <iostream>
using namespace std;

void removeDup(int arr[], int n) {
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[j] != arr[i]) {
            j++;
            arr[j] = arr[i];
        }
    }
    for (int k = 0; k <= j; k++) {
        cout << arr[k] << endl;
    }
}

int main() {
    int arr[] = {1, 1, 2, 3, 4, 7,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDup(arr, n);

    return 0;
}
