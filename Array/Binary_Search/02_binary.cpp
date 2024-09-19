// In thsi program we use stl library function 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v{1,2,3,4,5,6,8,9};
    if(binary_search(v.begin(),v.end(),19)){
        cout<<"Element is found "<<endl;
    }
    else{
        cout<<"Element is not found "<<endl;

    }
}