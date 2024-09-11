#include<iostream>
#include<climits>
using namespace std;
int getMini(int arr[][4],int i,int j){
    int mini=INT_MAX;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;
}
int main(){
    int arr[3][4]={{1,2,3,7},{4,5,6,7},{1,2,5,6}};
    int i=3;
    int j=4;
    for(int i=0; i<3;i++){
        for(int j=0; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<getMini(arr,i,j)<<" Is the minimum number of the 2D Array .";
}