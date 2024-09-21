#include<iostream>
using namespace std;
int findsquare(int n){
    int s=0;
    int e=n;
    int target=n;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(mid*mid == target)
          return mid;
        if(mid*mid>target){
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
    int n;
    cout<<"Enter the elemenet  of n: "<<endl;
    cin>>n;
    int ans = findsquare(n);
    cout<<"Ans is: "<< ans<<endl;

    int precision;
    cout<<"Enter the numberof a floating digit in precison"<<endl;
    cin>>precision;
    double step =0.1;
    double finalans = ans;
    for(int i=0;i<precision;i++){

         for(double j=finalans; j*j<=n;j=j+step){
            finalans =j;
        }
        step=step/10;
    }
    cout<<"Final ans is ."<<finalans<<endl;
    
   
}
