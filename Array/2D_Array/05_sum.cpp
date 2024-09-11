// print sum of 2 D array
#include<iostream>
using namespace std;
void printSum(int arr[][4],int i,int j){
    
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
           sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][4]={{1,5,6,4},{4,5,8,9},{9,5,4,6}};
    int i=3;
    int j=4;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    printSum(arr,i,j);
}