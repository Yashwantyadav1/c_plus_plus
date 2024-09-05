#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,5,5,69,54,68,669,747,22,77};
    int size =9;
    int maxi=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > maxi){
            maxi = arr[i] ; 
        }
    }
    cout<<"The maximum number is : "<<maxi<<endl;
}