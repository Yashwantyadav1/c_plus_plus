#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int> >arr;
    vector<int>a{1,2,5,4,6};
    vector<int>b{5,4,6,7,6};
    vector<int>c{6,4,7,5,25,78,4,2,0};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(int i=0; i<arr.size();i++){
        for(int j=0; j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}