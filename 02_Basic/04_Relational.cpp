#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age >=95){
        cout<<"Your age is too Maximum you cannot drive a vichle"<< endl;
    }
    else if(age >=18){
        cout<<"Your age is above 18 you are eligible to drvie a vichle "<< endl;
    }
    else{
        cout<< "Your age is under 18 so you cannot drive a vichle "<< endl;
    }
}