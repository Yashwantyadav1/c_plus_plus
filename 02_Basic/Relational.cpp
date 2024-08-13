#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks"<< endl;

    cin>>marks;

    if(marks >=90){
        cout<<"you are pass and your Grade is A "<< endl;
    }
    else{
        if(marks >=80){
            cout<<"you are pass and your Grade is B "<< endl;
        }
        else{
            if(marks >=60){
                cout<<"you are pass and your Grade is C "<< endl;
            }
            else{
                if(marks >=40){
                    cout<<"you are pass and your Grade is D "<< endl;
                }
                else{
                    cout<<"you are Just pass and your Grade is f "<< endl;
                }
            }
        }
    }
}