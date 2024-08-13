#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            // when we use Row And Col they give same result as your desire
            cout<<col+1 <<"* "; 
        }
        cout<<endl;
        
    }
}