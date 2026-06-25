#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> nums, int x){
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans;

    while(low <= high){
        int mid = (low + high) / 2;
        if(nums[mid] >= x){
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
    vector<int> arr = {3, 5, 8, 15, 19};                  
    int x = 9; 

    int ans = lowerBound(arr, x);
    cout << "The lower bound is the index: " << ans << "\n";
    return 0;
}