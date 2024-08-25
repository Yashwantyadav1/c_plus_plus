#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0; row<n; row++){
        //In this line we print  Space  in the hpllow pyramid 
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        // in this line we print number with Space 
        int start=1;
        for(int col=0; col<2*row+1; col++){
            if(col==0||row== n-1){
                if(col%2==0){
                 cout<<start;
                  start=start+1;
                }
                else{ 
                  cout<<" ";
                }
             
            }
            // in this line we print 1 in 1st pyramid row 
            else{
                if(col==0){
                    cout<<1;
                }
                // in this line we print row +1 count in the last pyramid 
                else if(col==2*row){
                    cout<<row+1;

                }
                // in this line we print space between them
                else{
                    cout<<" ";
                }
            }
            
        }
        cout<<endl;
    }
}