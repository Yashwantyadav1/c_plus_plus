#include<bits/stdc++.h>
using namespace std;
string longestpalindromesubstring(const string & str){
    int n = str.length();
    if(n==0)return "";
    vector<vector<bool>> dp(n,vector<bool>(n,false));
    int start = 0;
    int maxLength =1;

    for(int i=0; i<n; ++i){
        dp[i][j] = true;
    }
    for(int i=0; i<n-1; ++i){
        if(str[i]==str[i+1]){
            dp[i][i+1]=true;
            start =i;
            maxLength=2;
        }
    }
    for(int length=3; length<=n; ++length){
        for(int i=0; i<n-length+1;++i){
            int j = i+length-1;
            if(s[i] == s[j] && dp[i+1][j-1]){
                dp[i][j] = true; 
                start = i;
                maxLength = length;

            }
        }
    }
    return str.substr(start,maxLength);

}
int main(){
    string str="babad";
    string result =longestpalindromesubstring(str);
    cout<<"Longest palindrome substring "<<result<<endl;
    return 0;
}