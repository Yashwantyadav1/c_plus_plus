#include<bits/stdc++.h>
// #include<vector>
using namespace std;

int main(){
    int n;
     vector<int>arr;
    int ans = (sizeof(arr)/sizeof(int));
    cin >> n;
    

    vector<int> brr(n, 9);  // Initialize vector with n elements, all set to 9
    cout << "Size of b " << brr.size() << endl;
    cout << "Capacity of b " << brr.capacity() << endl;
    
    for (int i = 0; i < brr.size(); i++) {
        cout << brr[i] << " ";
    }
    cout << endl;

    return 0;
}
