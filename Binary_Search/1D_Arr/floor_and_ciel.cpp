#include <iostream>
#include <vector>
using namespace std;

int floorFunc(vector<int> nums, int x){
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans;
    //floor
    while(low <= high){
        int mid = (low + high) / 2;

        if(nums[mid] <= x){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int cielFunc (vector<int> nums , int x){
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans;

    while(low <= high){
        int mid = (low +high) / 2;

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
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int x = 9;

    int flr = floorFunc(arr, x);
    int ciel = cielFunc(arr, x);
    cout << "The floor and ceil are: " << flr << " " << ciel;

    return 0;
}