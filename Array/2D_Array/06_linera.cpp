#include<iostream>
using namespace std;
bool linearSearch(int arr[][4],int key){
    for(int i=0;i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]== key)
                return true;
            
        }
    }
    return false;
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
  
    int key = 11;
    if(linearSearch(arr, key)) {
        cout << "Key " << key << " found in the array." << endl;
    } else {
        cout << "Key " << key << " not found in the array." << endl;
    }

}