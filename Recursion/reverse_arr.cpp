//recursive approach is here(call stack space complexity issue) ,,, here also two pointers are used.
//we can use two pointer approach to solve this optimally.

#include <iostream>

#include <vector>

using namespace std;

void reverse_arr(vector<int>& arr, int left , int right){
    if(left >= right){
        return;
    }
    swap(arr[left], arr[right]);

    reverse_arr(arr, left +1, right - 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    reverse_arr(arr, 0, n - 1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}