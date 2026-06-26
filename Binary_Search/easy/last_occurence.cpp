//Last occurence

#include <iostream>
#include <vector>
using namespace std;

int lastOccurence(vector<int> nums, int x){
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans;

    while(low <= high){
        int mid = (low + high) / 2;
        if(nums[mid] <= x){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(nums[ans] == x){
        return ans;
    }
    else{
        return -1;
    }
}

int main() {
    vector<int> arr = {3, 5, 10, 10, 15, 19};                  
    int x = 10;

    int result = lastOccurence(arr, x);

    cout<< "the ans is :" << result;
    return 0;
}