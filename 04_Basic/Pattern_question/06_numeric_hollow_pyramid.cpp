#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int row=0; row<n; row++){
         //  We print Space
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        // we print pyramid 
         int start=1;
        for(int col=0; col<2*row+1; col++){
           // we print row 1 and row 2
            if(row==0 || row==n-1){
                // check even
                if(col%2==0){
                    cout<<start;
                    start=start+1;
                }
                // print space
                else{
                    cout<<" ";
                }
            }
            // print 1st col in 1 
            else{
                if(col==0){
                    cout<<1;
                }
                // print last col in row+1
                else if(col==2*row){
                    cout<<row+1;
                }
                // print space
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}