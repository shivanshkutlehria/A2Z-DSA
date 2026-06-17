#include <iostream>
#include <climits>
using namespace std;

int secondLargestElement(int arr[], int n){
    int max = INT_MIN;
    int second_max = INT_MIN;

    for(int i = 0; i < n; i++){
        if(max< arr[i]){
            second_max = max;
            max = arr[i];
        }
        else if(arr[i]> second_max && arr[i] != max){
            second_max = arr[i];
        }
    }
    return second_max;
}

int main() {
    int arr[] = {1, 2, 4, 7, 7, 5};  

    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Find the second largest elements
    int sL = secondLargestElement(arr, n);

    // Output the results
    cout << "Second largest is " << sL << endl;

    return 0;
}