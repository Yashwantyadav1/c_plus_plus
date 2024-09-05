#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<10; i++){
        arr[i]=1;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}