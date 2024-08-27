#include<bits/stdc++.h>
using namespace std;
int addNum(int a,int b){
    int result= a+b;
    return result;
}
int main(){
    int a,b;

    cout<<"Enter the value of a"<<endl;
    cin>>a;

    cout<<"Enter the value of b"<<endl;
    cin>>b;

    int sum = addNum(a,b);
    cout<<"Adding of two number is "<<sum;
}