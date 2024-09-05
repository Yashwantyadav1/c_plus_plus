#include<iostream>
using namespace std;
int inc(int arr[],int size){
    arr[0]=7;
    arr[1]=8;
    arr[2]=5;
    arr[3]=9;
    arr[6]=12;
    for(int i=0;i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[8]={1,2,6,5,8,4,0};
    int size=7;
    inc(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
}