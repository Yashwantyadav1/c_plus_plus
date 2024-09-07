#include<iostream>
#include<vector>
using namespace std;
int main(){
    // create of vector
    vector<int>arr;
    int ans = (sizeof(arr)/sizeof(int));
    cout<<ans<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

}
