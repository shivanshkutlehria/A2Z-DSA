#include <iostream>

using namespace std;

int findLargestElement(int arr[], int n){
    if (n < 2){
        return -1;
    }
    int max = arr[0];

    for(int i = 0; i < n ; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int arr1[] = {2, 5, 1, 0, 3};
    int n = 5;  // Size of the array
    int max = findLargestElement(arr1, n);  // Call the function to find the largest element
    cout << "The largest element in the array is: " << max << endl;  // Output the result

    // Array 2
    int arr2[] = {8, 10, 5, 7, 12};
    n = 5;  // Size of the array
    max = findLargestElement(arr2, n);  // Call the function to find the largest element
    cout << "The largest element in the array is: " << max << endl;  // Output the result

    return 0;
}