#include<bits/stdc++.h>
//#include<vector>
using namespace std;
int main(){
    int row=3;
    int col=4;
    vector<vector<int> >arr(row,vector<int>(col,101));
    for(int i=0;i<arr.size(); i++){
        for(int j=0; j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }

}