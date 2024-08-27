#include<bits/stdc++.h>
using namespace std;
char grade(int n){
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
    // switch ( marks/10 ){
    //     case9: return 'A';
    //     break;
    //     case7: return 'B';
    //     break;
    //     case6: return 'D';
    //     break;
    //     default: return'E';
    // }

}
int main(){
    // int marks;
    // cout<<"Enter the Student Number that he achive in that  Subject  "<<endl;
    // cin>>marks;

    // char finalgrade=grade( marks);
    // cout<<finalgrade;

    for(int i=1; i<=100; i++){
        char ans= grade(i);
        cout<<"grade for marks = "<< i <<"is "<<ans<<endl;
    }
    return 0;

}