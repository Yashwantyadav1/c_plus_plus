// Row wise acces in the array 
#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={{1,2,3,7},{4,5,6,7},{1,2,5,6}};
    for(int i=0; i<3;i++){
        for(int j=0; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}