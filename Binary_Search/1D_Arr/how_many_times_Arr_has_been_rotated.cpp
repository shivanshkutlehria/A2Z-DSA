// Find the pivot index , or the index with minimum element.
#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int> arr){
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while(low < high){
        int mid = low +(high - low) / 2;

        if(arr[mid] > arr[high]){
            low = mid + 1;
        }
        else{
            high = mid;
        }

    }
    return low;
}

int main() {
    vector<int> nums = {6,7,0,1,2,3,4,5};
    int result = pivotIndex(nums);
    cout<< "ans is :" <<result;
    return 0;
}