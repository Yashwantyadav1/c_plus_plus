#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0; i<n;i++){
	    for(int j=0; j<(2*i)+1;j++){
	        cout<<"*";
	    }
	   cout<< endl;
	}
    for(int i=0; i<n;i++){
        for(int j=0;j<(2*n)-(2*i)-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
