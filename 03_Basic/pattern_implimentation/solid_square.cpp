#include<iostream>
using namespace std;
// To print solid square
int main(){
    // outer loop 
    for(int row=0; row<5 ; row=row+1){
        // Inner loop
        for(int col=0; col<5; col=col+1){
            cout<<" * ";
        }
        cout<<endl;
    }
}