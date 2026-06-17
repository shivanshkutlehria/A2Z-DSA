//Brute_force

#include <iostream>
#include <vector>
using namespace std;

int subArraysum(vector<int>& nums, int k){
    vector<int> result;
    int maxlength = 0;
    for(int i = 0; i < nums.size() ; i++){
        for(int j = i+1 ; j < nums.size() ; j++){
            int currSum = 0 ;

            for(int pt = i ; pt < j ; pt ++){
                currSum += nums[i];
            }

            if(currSum == k){
                maxlength = max(maxlength, j - i + 1);
            }
        }
    }
    return maxlength;
}

int main() {
    vector<int> a = { -1, 1, 1 };
    int k = 1;
    int len = subArraysum(a, k);

    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}