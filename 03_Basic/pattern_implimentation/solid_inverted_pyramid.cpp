#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
// print row
    for(int row=0; row<n; row=row+1){
        // print Space
        for(int col=0; col<row; col=col+1){
            cout<<" ";
        }
        //  print Star(*)
        for(int col=0; col<n-row; col=col+1){
            cout<<"* ";
        }
        // New line 
        cout<<endl;
    }
}