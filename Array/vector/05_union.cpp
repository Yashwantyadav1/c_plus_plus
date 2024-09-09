#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int sizea=5;
    int brr[]={6,7,8,9,};
    int sizeb=4;
    vector<int>ans;
    for(int i=0; i<sizea;i++){
        
        ans.push_back(arr[i]);
    }
    for(int i=0; i<sizeb;i++){
        // if(ans!==INT_MIN){
            ans.push_back(brr[i]);
        // }
    }
    cout<<"the union of the array is "<<endl;
    for(int i=0;i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


}