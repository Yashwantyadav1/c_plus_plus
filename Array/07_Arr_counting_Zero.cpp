#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,0,4,5,9,0,0,1,1,1,5,8,9,1};
    int size=19;
    int numZero=0;
    int numOne=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            numZero++;
        }
        if(arr[i]==1){
            numOne++;
        }
    }
    cout<<"Number of 0 element of this array is: "<<numZero<<endl;
    cout<<"Number of 1 element of this array is: "<<numOne<<endl;
}