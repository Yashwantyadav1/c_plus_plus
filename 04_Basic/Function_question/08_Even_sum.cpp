#include<bits/stdc++.h>
using namespace std;
int evenSum(int n){
    int sum=0;
    for(int i=2; i<=n; i=i+2){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the value of n  "<<endl;
    cin>>n;
    int ans= evenSum(n);
    cout<<"Even sum upto n is "<<ans<<endl;
}