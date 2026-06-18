// problem : finding leaders in an array (medium)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& nums){
    vector<int> ans;
    int n = nums.size();
    ans.push_back(nums[n-1]);
    int max = nums[n - 1];
    if(nums.empty()){
        return ans;
    }
    for(int i = n - 2 ; i>= 0 ; i--){
        if(nums[i] > max){
            ans.push_back(nums[i]);
            max = nums[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}


int main() {
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    vector<int> ans = leaders(nums);

    cout << "Leaders in the array are: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}