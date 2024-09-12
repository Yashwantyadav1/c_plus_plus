// 2D array column wise declartion 
#include<iostream>
using namespace std;
int main(){
    int arr[4][5]={{1,2,3,5,5},{7,8,9,5,4},{4,5,8,7,9},{16,15,44,12,5}};
    for(int i=0; i<5;i++){
        for(int j=0; j<4; j++){
            cout<<arr[j][i]<<" ";

        }
        cout<<endl;
    }
}