#include<iostream>
#include<climits>
using namespace std;
int getMax(int arr[][4],int i,int j){
    int maxi=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}
int main(){
    int arr[3][4]={{1,2,3,7},{4,5,6,7},{1,2,5,6}};
    int i=3;
    int j=4;
    // int maxi=INT_MIN;
    for(int i=0; i<3;i++){
        for(int j=0; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<getMax(arr,i,j)<<" Is the maximum number of the 2 D array . ";
}