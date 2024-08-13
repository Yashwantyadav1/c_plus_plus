#include<iostream>
using namespace std;
// take input as a user in solid rectangle.
int main(){

    int rowCount,colCount;
    cout<<"Enter the row number "<<endl;
    cin>>rowCount;
    cout<<"Enter the column number "<<endl;
    cin>>colCount;
    // Enetr the outer loop 
    for(int row=0; row<rowCount;row=row+1){
       // Enter the Inner loop 
        for(int col=0; col<colCount;col=col+1){
            cout<<" * ";
        }
        cout<<endl;
    }
}
