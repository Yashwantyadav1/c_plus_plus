#include<iostream>
using namespace std;
bool checkprime(int n){
    int i=2;
    for(i=2;i<n;i++){
        if(n%i ==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    bool isprime=checkprime(n);
    if(isprime){
        cout<<"prime\n";

    }
    else{
        cout<<"Not a prime\n";
    }
}