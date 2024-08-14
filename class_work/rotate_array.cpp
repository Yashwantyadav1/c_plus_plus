#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int tem=arr[0];

   
    for(int i=1;i<5;i++){
        arr[i-1]=arr[i];

    }
    arr[4]=tem;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";

    }
}