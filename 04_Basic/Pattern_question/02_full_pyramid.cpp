#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=0; row<n; row++){
        // in this line we print space in the  inverted pyramid 
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        //in this line we print numeric pyramid 
        for(int col=0; col<row+1; col++){
            cout<<row+col+1;
        }
        //in this line we print inverse counting in numeric pyramid 
        int start=2*row;
        for(int col=0; col<row; col=col+1){
            cout<<start;
            start=start-1;
        }
        cout<<endl;
    }
}