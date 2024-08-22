#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // space 
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        // incremental number triangle
        for(int col=0; col<row+1; col++){
            cout<<row+col+1;
        }
        // Reverse counting 
          int start=2*row;
        for(int col=0; col<2*row; col++){
            cout<<start;
           start= start-1;
        }
        cout<<endl;
    }
}