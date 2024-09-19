#include<iostream>
#include<vector>
using namespace std;

int firstOcurrance(const vector<int>& arr, int target){
    int size = arr.size();  // get the size of the vector
    int start = 0;
    int end = size - 1;
    int ans = -1;  // initialize ans to -1 in case the target is not found

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            ans = mid;   // update ans to the current mid position
            end = mid - 1;  // look on the left side for the first occurrence
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;  // return the first occurrence index
}

int main(){
    vector<int> v{1,2,3,4,5,5,5,5,5,5,5,9,8,7};
    int target = 5;
    int indexFirstOccurrence = firstOcurrance(v, target);
    
    if(indexFirstOccurrence != -1)
        cout << "The first occurrence is at index " << indexFirstOccurrence << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

