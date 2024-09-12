// Row wise acces in the array 
#include<iostream>
using namespace std;
int main(){
    int arr[3][5]={{1,2,3,7,5},{4,5,6,7,4},{1,2,5,6,9}};
    for(int i=0; i<3;i++){
        for(int j=0; j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}