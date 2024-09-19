#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
   // int mid=(start+end)/2;
   int mid=start+(end-start)/2; // In this index we find mid of that element 

    while(start<=end){ //this condition show that  when start <= end 
        int element =arr[mid];
        if(element==target){ // this condition show that if start ==target return mid.
            return mid;
        }
        else if(target<element){ //This condition show if element found < element return end=mid-1  
            end=mid-1;
        }
        else{     // otherwise return mid +1
            start=mid+1;
        }
       mid=start+(end-start)/2; //This line show these two condition is true then this line empliment  
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,6,7,12,56,78,96,45};
    int size=11;
    int target=96;
    int indexoftarget= binarySearch(arr,size,target);
    if(indexoftarget == -1){
        cout<<"target not found "<<endl;

    }
    else{
        cout<<"target found at "<<indexoftarget <<" index"<<endl;

    }
    return 0;

}