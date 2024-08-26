#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter the value of the age of that person is "<<endl;
    cin>>age;
    if(age>=18 && age<=90){
        cout<<"you can drive a vehicle ";
    }
    else if(age>=90 ){
        cout<<"your age is abvoe than 90 you can not drvie a car";
    }
    else{
        cout<<"You are below 18 & you are a student you can not drivre a vechicle ";
    }
    
}