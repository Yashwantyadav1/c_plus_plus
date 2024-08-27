#include<bits/stdc++.h>
using namespace std;
void printNum(int a){
    a++;
    ++a;
    ++a;
    cout<<a<<endl;   
}
int main(){
    int a=5;
    printNum(a);

    cout<<"Address of a is "<< &a <<endl;
}
