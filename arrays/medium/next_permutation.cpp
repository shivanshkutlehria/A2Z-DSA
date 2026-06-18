//Problem : Next permutation (medium)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void next_permutation(vector<int> & nums){
    int ind = -1;
    int n = nums.size();

    for(int i = n-2 ; i>= 0 ; i--){
        if(nums[i] < nums[i+1]){
            ind = i;
            break;
        }
    }
    if(ind == -1){
        reverse(nums.begin(), nums.end());
    }
    for(int i = n-1; i > ind ; i--){
        if(nums[i] > nums[ind]){
            swap(nums[i], nums[ind]);
            break;
        }
    }
    reverse(nums.begin() + ind + 1 , nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3};
    next_permutation(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}