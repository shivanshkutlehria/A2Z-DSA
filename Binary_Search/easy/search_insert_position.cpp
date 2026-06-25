#include <iostream>
#include <vector>
using namespace std;

int insertPosition(vector<int>& nums, int x){
    int low = 0;
    int n = nums.size();
    int high = n - 1;
    while(low <= high){
        int mid = (low + high) / 2;

        if(nums[mid] == x){
            return mid;
        }
        else if(nums[mid] > x){
            high = mid - 1;
        }
        else{
            low = low + 1;
        }
    }
    return low;
}

int main() {
    vector<int> arr = {3, 5, 10, 15, 19};                  
    int x = 9; 

    int ans = insertPosition(arr, x);

    cout<< "ans is : "<< ans ;
    return 0;
}