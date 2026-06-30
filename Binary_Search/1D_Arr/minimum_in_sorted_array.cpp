//the minimum element will be around pivot
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minimumElement(vector<int> arr){
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while(low < high){
        int mid = low +(high - low) / 2;

        if(arr[mid] > arr[high]){
            low = mid + 1;
        }
        else{
            high = mid;
        }

    }
    return arr[low];
}

int main() {
    vector<int> nums = {6,7,0,1,2,3,4,5};
    int result = minimumElement(nums);
    cout<< "ans is :" <<result;
    return 0;
}