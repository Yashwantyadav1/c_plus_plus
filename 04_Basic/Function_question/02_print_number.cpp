#include<bits/stdc++.h>
using namespace std;

void print (int num){
    ++num;
    num++;
    cout<<num<<endl;
    --num;
}
int main(){
    int num=12;
    num++;
    ++num;
    print(num);
    cout<<num<<endl;

}