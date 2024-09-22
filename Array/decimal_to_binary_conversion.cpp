#include<iostream>
#include<cmath>
using namespace std;
int decimalToBinaryMethod(int n){
    int binaryno=0;
    int i=0;
    while(n>0){
        int bits=( n & 1);
        binaryno= bits*pow(10,i++)+binaryno;
        n=n>>1;
    }
    
    return binaryno;
}
int main(){
    int n;
    cin>>n;
    int binary = decimalToBinaryMethod(n);
    cout<<binary;
}