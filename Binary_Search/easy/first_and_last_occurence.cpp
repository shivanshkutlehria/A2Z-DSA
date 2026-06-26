#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int ans1 = -1;
        int ans2 = -1;
        vector<int> ans;
        //first
        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                ans1 = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        low = 0;
        high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans2 = mid;
                low = mid + 1;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        ans.push_back(ans1);
        ans.push_back(ans2);

        return ans;
    }

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> ans = searchRange(nums, target);
    cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;
    return 0;
}