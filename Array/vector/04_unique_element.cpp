#include<bits/stdc++.h>
// #include<vector>
using namespace std;
int findunique(vector<int>arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number of element ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the element "<<endl;

    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
   int uniqueElement =findunique(arr);
   cout<<"Our Unique element is : "<<uniqueElement<<endl;

 return 0;
}