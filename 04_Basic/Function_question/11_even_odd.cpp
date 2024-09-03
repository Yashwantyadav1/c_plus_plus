#include<bits/stdc++.h>
using namespace std;
int even_number(int n){
   
       if(n % 2 == 0){
        cout<<"This number is Even Number ";
        }
      else{
        cout<<"This number is not Even Number, This is Odd";
        }

    
    
}
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int even = even_number(n);
}