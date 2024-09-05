#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n;
    cin>>n;
    cout<<"Enter the element of Array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<2*arr[i];
    }
    

}