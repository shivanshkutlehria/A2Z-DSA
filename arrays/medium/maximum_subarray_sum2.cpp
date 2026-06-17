#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int maxSubarraySum(vector<int> &nums){
    int curr  =0 ;
    int maxi = INT_MIN;
    int ansStrt = -1;
    int ansEnd = -1;

    int start = 0;
    for(int i = 0; i< nums.size();  i++){
        if(curr  == 0){
            start = i;
        }

        curr += nums[i];

        if(curr > maxi){
            ansStrt = start;
            ansEnd = i;
            maxi = curr;
        }

        if(curr < 0){
            curr = 0;
        }
    }
    cout << "The subarray is: [";
        for (int i = ansStrt; i <= ansEnd; i++) {
            cout << nums[i] << " ";
        }
    cout << "]" << endl;
    return maxi;
}

int main() {
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

    int maxSum = maxSubarraySum(arr);

    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}