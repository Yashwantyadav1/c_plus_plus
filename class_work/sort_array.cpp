#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 8};
    
    int n = sizeof(arr) / sizeof(arr[0]); 

    for(int i = 1; i < n; i++) {
        if(arr[i-1] <= arr[i]) {
            continue;
        } else {
            cout << "Array is not sorted" << endl;
            return 0; 
        }
    }
    cout << "Array is sorted" << endl;

    int arr1[]={1,4,5,7,8,9};
     n= sizeof(arr1) / sizeof(arr1[0]);
    for(int i=1;i<n;i++){
        if(arr1[i-1] <= arr1[i]){
            continue;
        }else{
            cout<<"Array is not sorted"<< endl;
            return 0;
        }
    }
    cout<<"Array is sorted"<<endl;
    return 0;
}
