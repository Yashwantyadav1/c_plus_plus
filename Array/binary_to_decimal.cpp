#include<iostream>
#include <cmath>
using namespace std;
int binaryTodecimal(int n){
    int decimal=0;
    int i=0;
    while(n){
        int bit =n%10;
        
        decimal=decimal+bit*pow(2,i++);

        n /=10;
    }
    return decimal;
}
int main(){
    int n;
    cin>>n;
    int decimalNo=binaryTodecimal(n);
    cout<<decimalNo;
}