#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    vector<int> arr={1,2,1,3,5,5,6};
    set<int >s(arr.begin(),arr.end());
    vector<int >uniqueArr(s.begin(),s.end());

    for(int num: uniqueArr){
        cout<< num <<" ";
        
    }



}