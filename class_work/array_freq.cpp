#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int arr[]={1,1,8,3,5};
    map<int,int> m;
    for(int i = 0; i < n; i++) {
        m[arr[i]]++;
    
    }
    for(auto it: m) {
        cout<<it.first<<" "<<it.second<<endl;

    }
    return 0;
}
