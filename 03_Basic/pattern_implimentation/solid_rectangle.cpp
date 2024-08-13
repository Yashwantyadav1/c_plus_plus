#include<iostream>
using namespace std;

// solid Rectangle 

int main(){
    // Outer loop for row observation 
    for(int row=0; row<3 ; row = row+1){
        // Inner loop for col observation 
        for(int col=0; col<5;col=col+1){
            cout<<" *  ";
        }
        cout<< endl;
    }
}