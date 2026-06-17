#include <iostream>
#include <vector>
using namespace std;

int maxSubarraySum(vector<int> &nums){
    int curr =0 ;
    int maxi = 0;

    for(int i = 0; i< nums.size() ; i++){
        curr += nums[i];
        maxi = max(maxi, curr);

        if(curr < 0){
            curr = 0;
        }
    }
    return maxi;

}

int main() {
     vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

     int maxSum= maxSubarraySum(arr);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}