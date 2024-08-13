#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // print row 
    for(int row=0; row<n; row=row+1){
        // print space 
        for(int col=0; col<n-row-1; col=col+1){
            cout<<" ";
        }
        // print Star(*)
        for(int col=0; col<row+1; col=col+1){
            cout<<"* ";
        }
        // Go to next line 
        cout<<endl;

    }
}