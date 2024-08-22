#include<iostream>
#include<string>
using namespace std;

int main(){
    string input;
    bool ispalindrome = true;
    cout<<"Enter the Number ";
    getline(cin,input);

    int left=0;
    int right= input.length()-1;

    while(left<right){
        if(input [left] != input[right] ){
            ispalindrome = false;
            break;
        }
        left++;
        right--;
        
    }
    if(ispalindrome){
        cout<<"\""<< input<<"\"" "this is a palindrome "<<endl;
    }
    else{
        cout<<"\""<< input<<"\"" "this is not palindrome "<<endl;
    }
 
}