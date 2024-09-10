#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,10,30,30,20,56,59};
    int sum=30;
    for(int i=0; i<arr.size(); i++){
        int element =arr[i];
        for(int j=i+1; j<arr.size();j++){
            // cout<<"("<<element <<","<<arr[j]<<")"<<endl;
            if(element + arr[j]==sum){
                cout<<"pair is found "<<"("<<element<<","<<arr[j]<<")"<<"="<<sum<<endl;
            }
        }
        
    }
}
