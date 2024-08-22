#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 8};
    int arr1[]={1,4,5,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr1) / sizeof(arr1[0]);

    
    map<int ,int> m1;
    for(int i=0; i<n; i++){
        m1[arr[i]]++;
        
    }
    for(int j=0;j<m;j++){
        m1[arr1[j]]++;
    }
    for(auto it:m1) {
        cout<<it.first<<endl;
    }
    return 0;

}
