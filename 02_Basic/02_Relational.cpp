#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks"<< endl;
    cin>>marks;
    if(marks >=90){
        cout<<"You are pass With Grade 'A' "<< endl;
    }
    else if(marks >=80){
         cout<<"You are pass With Grade 'B' "<< endl;
    }
    else if(marks >=60){
         cout<<"You are pass With Grade 'C' "<< endl;
    }
    else if(marks >=40){
         cout<<"You are pass With Grade 'D' "<< endl;
    }
    else{
         cout<<"You are Just  pass With Grade 'E' "<< endl;
    }
}