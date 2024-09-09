#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,10,20,30,62,56,45};
    for(int i=0; i<arr.size(); i++){
        int element =arr[i];
        for(int j=i+1; j<arr.size();j++){
            cout<<"("<<element <<","<<arr[j]<<")"<<endl;
        }
    }
}
