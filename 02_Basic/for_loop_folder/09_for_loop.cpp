// Divide of the number where the no number not get least no untill divide 

#include<iostream>
using namespace std;

int main(){

    int n, i ;

    cout<<"Enter the value of number "<< endl;

    cin>>n;

    for(i=n; i>0; i=i/2 ){
        cout<< i<<endl;
    }
}