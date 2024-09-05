#include<iostream>
using namespace std;
int inc(int arr[],int size){
     arr[0]=21;
    arr[2]=45;
     arr[5]=8;
    for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int arr[10]={1,2,3,5,9,7};
    int size= 6;
    inc(arr,size);
    for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}