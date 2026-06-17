#include <iostream>
#include<vector>
using namespace std;

//The code is for rotating to right, if rotation to left is asked than just rearrange the logic to reverse the last elements by k elements first.

void reverseArray(vector<int>& nums, int start, int end){
    while(start<end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

vector<int> rotateArray(vector<int>& nums, int k){
    int n = nums.size();
    if(n == 0 || k == 0) return nums;

    reverseArray(nums, 0, n-1);
    reverseArray(nums, 0, k-1);
    reverseArray(nums, k, n-1);

    return nums;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;

    vector<int> result = rotateArray(nums, k);

    for(int i : result){
        cout<< i << " ";
    }
    return 0;
}