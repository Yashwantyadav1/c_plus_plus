#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int row=0; row<n; row++){
        int start = row+1;
        for(int col=0; col<row+1; col++){
            cout<<start <<" ";
            // cout<<row+col+1;
            start = start+1;
        }
        cout<<endl;
    }
}