#include<bits/stdc++.h>
using namespace std;

void rearrangeArray(vector<int> & arr){
   int left=0, right=arr.size()-1;
   while(left<=right){
    if (arr[left]< 0 && arr[right]<0){
        left++;
    }
    else if (arr[left] > 0 && arr[right]< 0){
        swap(arr[left], arr[right]);
        left++;
        right--;

    }
    else if (arr[left]>0 && arr[right]>0){
        right--;
    }
    else{
        left++;
        right--;
    }
   }
}

int main() {
    vector<int> arr = {-1, 2, -3, 4, 5, -6, -7, 8, 9};
    
    rearrangeArray(arr);

    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}


