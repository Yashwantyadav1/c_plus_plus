// In this we use stl library function to find lower occurance in thevalue 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   vector<int> v{1,2,3,6,5,5,5,8,8,8,8,5,5,5,5,54,9,8,7,48};
   int target=8;
   auto ans=lower_bound(v.begin(), v.end(), target);
   cout<<"ans is: "<<ans-v.begin()<<endl;

}