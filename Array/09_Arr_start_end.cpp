#include<iostream>
using namespace std;
int main(){
    int arr[9]={20,50,30,60,40,80,70,90,100};
    int size=9;
    int start=0;
    int end=size-1;
    while(true){
        if(start>end)
        break;
        if(start==end){
            cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
            
        }
        start++;
        end--;

    }
}