// column wise array to the input 2D array
#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"print 2D array in row wise "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}