#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count;
    for(int row=0; row<n; row++){
       // count=1;
        for(int col=0; col<n; col++){
            if(row==0 || col==0 || col==n-row-1){
                cout<<col+1;
                //cout<<count; This also used to print counting
            }
            else{
                cout<<" ";
            }
            //count++;
        }
       cout<<endl;
    }
}