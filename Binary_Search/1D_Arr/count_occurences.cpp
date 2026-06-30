#include <iostream>
#include <vector>
using namespace std;

int countOccurences(vector<int> nums, int x) {
    int n = nums.size();

    int low = 0;
    int high = n - 1;
    int first = -1;
    int last = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == x) {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (first == -1)
        return 0;

    low = 0;
    high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == x) {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return last - first + 1;
}

int main() {
    vector<int> arr = {2,4,8,8,8,8,8,13};
    int x = 8;

    int result = countOccurences(arr, x);

    cout << "ANS is : " << result;

    return 0;
}