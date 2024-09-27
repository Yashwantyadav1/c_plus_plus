#include<iostream>
using namespace std;
int solve(int dividend, int divisor){
    int s=0;
    int e=dividend;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        if(mid*divisor == dividend ){
            return mid;
        }
        if(mid*divisor > dividend ){
           e=mid-1; 
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){

    int dividend =36;
    int divisor=7;
    int ans=solve(dividend,divisor);
    cout<<"Ans is : "<<ans<<endl;

}