//Optimal approach

#include <iostream>
#include <vector>
using namespace std;

int longestSubarraySum(vector <int>& nums ,  int k){
    int left=0;
    int right = 0;
    int maxlength = 0;
    int sum = nums[0];
    int n = nums.size();

    while(right < n){
        while(left <= right &&  sum > k){
            sum -= nums[left];
            left ++;
        }
        if(sum == k){
            maxlength =  max(maxlength, right - left + 1);
        }

        right ++;
        if(right < n) sum += nums[right];
    }
    return maxlength;
}

int main() {
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;

    int ans = longestSubarraySum(nums, k);

    cout << "The length of longest subarray having sum k is: " << ans;
    return 0;
}