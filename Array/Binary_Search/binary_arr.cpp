#include<iostream>
#include<algorithm>
using namespace std ;
int main(){
    int arr[]={1,2,3,6,5,49,7,45,25};
    int size=9;
    sort(arr,arr+size);// Fistly we sort the  given array then emlement the binary search (This role is applicable in unsorted element )

    if(binary_search(arr,arr+size,25)){
        cout<<"Element is found "<<endl;
    }
    else{
        cout<<"Element is not found "<<endl;

    }
}