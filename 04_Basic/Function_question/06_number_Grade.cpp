#include<bits/stdc++.h>
using namespace std;
void grade(int n){
    if(n >= 90){
        cout<<"Your grade is 'A' "<<endl;
    }
    else if(n>=70){
        cout<<"Your grade is 'B' "<<endl;
    }
    else if(n>=60){
        cout<<"Your grade is 'C' "<<endl;
    }
    else{
        cout<<"Your grade is 'D' "<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the Student Number that he achive in that  Subject  "<<endl;
    cin>>n;

    grade(n);
}