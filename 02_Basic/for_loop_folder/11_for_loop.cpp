// We can write our code in this way 
#include<iostream>
using namespace std;

int main(){
    int i=0;
    for( ; ; ){
        if(i>5 && i<100){
            cout<< i <<endl;
        }
        i=i+1;
    }
}