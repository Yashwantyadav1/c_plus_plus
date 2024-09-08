#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>arr;
    // int ans = (sizeof(arr)/sizeof(int));
    // cout<<ans<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    // insert element in the vector 
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(7);
    arr.push_back(0);
    arr.push_back(9);

    // print the element of vector
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // (remove /delete) element of the vector
    arr.pop_back();
    arr.pop_back();

    // print the element of vector
    for(int i=0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;

}