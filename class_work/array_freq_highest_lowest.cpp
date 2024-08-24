#include <iostream>
#include <map>
#include <climits> 

using namespace std;

int main() {
    int n = 5;
    int arr[] = {1, 1, 8, 3, 5};
    map<int, int> m;
    
    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }

    // Variables to track the element with the highest and lowest frequency
    int maxFrequency = INT_MIN;
    int minFrequency = INT_MAX;
    int elementWithMaxFrequency = -1;
    int elementWithMinFrequency = -1;

    // Finding the elements with the highest and lowest frequency
    for (auto it : m) {
        int frequency = it.second;
        int element = it.first;

        if (frequency > maxFrequency) {
            maxFrequency = frequency;
            elementWithMaxFrequency = element;
        }

        if (frequency < minFrequency) {
            minFrequency = frequency;
            elementWithMinFrequency = element;
        }
    }

    // Printing the results
    cout << "Element with highest frequency: " << elementWithMaxFrequency 
         << " (" << maxFrequency << " times)" << endl;
    cout << "Element with lowest frequency: " << elementWithMinFrequency 
         << " (" << minFrequency << " time" << (minFrequency > 1 ? "s" : "") << ")" << endl;

    return 0;
}

