#include <iostream>
#include <vector>
using namespace std;

int searchRotatedArray(vector<int> arr, int k){
    int n = arr.size();
    int low = 0;
    int high = n -1 ;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == k){
            return mid;
        }

        if(arr[low] <= arr[mid]){
            if(arr[low] <= k && k < arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(arr[mid] <= k && k < arr[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {4,5,6,7,0,1};
    int target = 0;
    int result = searchRotatedArray(nums, target);
    cout<< "ans is :" <<result ;
    return 0;
}