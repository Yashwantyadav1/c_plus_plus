#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    for(int i = 1; i < n; i++) {
        if(arr[i-1] <= arr[i]) {
            continue;
        } else {
            cout << "Array is not sorted" << endl;
            return 0; // Exit the program if the array is not sorted
        }
    }
    cout << "Array is sorted" << endl;
    return 0;
}
