#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int> nums, int x){
    int low = 0;
    int n = nums.size();
    int high = n - 1;
    int ans;
    while(low <= high){
        int mid = (low + high) / 2;

        if(nums[mid] > x){
            ans = mid;
            high = mid - 1;
           
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {3, 5, 10, 15, 19};                  
    int x = 9; 

    int ans = upperBound(arr, x);
    cout << "The upper bound is the index: " << ans << "\n";
    return 0;
    return 0;
}