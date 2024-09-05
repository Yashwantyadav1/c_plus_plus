#include<iostream>
using namespace std;
bool find(int arr[], int size, int key){
     for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;

        }
        
    }
    return false;
}
int main(){
    int arr[5]={1,2,5,6,7};
    int size=5; 
    int key;
    cout<<"Enter the value of key is "<<endl;
    cin>>key;
    if(find(arr,size,key)){
        cout<<"Key is found "<<endl;
    }
    else{
        cout<<"Key is not found "<<endl;
    }
}