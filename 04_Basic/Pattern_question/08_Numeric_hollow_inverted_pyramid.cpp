#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=row+1; col<=n; col++){
            cout<<col;
        }
        cout<<endl;
    }
}