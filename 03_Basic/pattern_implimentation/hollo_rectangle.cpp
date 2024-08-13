#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // for(int row=0; row<4; row=row+1){
    //     if(row==0 || row==3){
    //          for(int col=0; col<6; col=col+1){
    //         cout<<"* ";
    //         // if(row == 0 || row == n-1){
    //         //     cout<<"* ";
    //         // }
    //         // else{
    //         //     cout<<" ";
    //         // }
    //          }
    //     }
    //     else{
    //         cout<<"*";

    //         for(int col=0; col<5; col=col+1){
    //             cout<<" ";
    //         }
    //         cout<<"* ";
    //     }

    //     cout<<endl;
    // }
     for(int row=0; row<4; row++){
        for(int col=0; col<6; col++){
            if(row==0 || row==3||col==0||col==5){
                cout<<"* ";
             }
             else{cout<<"  ";
             }
        }
        cout<<endl;
    }
    return 0;
}