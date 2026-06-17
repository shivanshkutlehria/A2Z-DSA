#include <iostream>

using namespace std;

int removeDuplicates(int arr[], int n){
    int i = 0;
    for(int j = 1 ; j < n; j ++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main() {
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = removeDuplicates(nums, n);

    cout << "Unique count = " << k << "\n";
    cout << "Array after removing duplicates: ";
    for (int x = 0; x < k; x++) {
        cout << nums[x] << " ";
    }
    cout << endl;
    return 0;
}