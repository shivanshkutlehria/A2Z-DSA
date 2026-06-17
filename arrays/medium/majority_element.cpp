//Brute force: taking two loops, one for element one for cnt than compare the count with the n/2 ..
//Better approach : using hashmap ; updating count (value) every time; after comapring cnt with pair.second (key, value); and return pair.first.

// optimal approach

#include <iostream>
#include <vector>
using namespace std;

int majorityElement (vector<int> &nums){
    int cnt = 0;
    int el = 0;
    for(int i = 0; i< nums.size(); i++){
        if(cnt == 0){
            cnt = 1;
            el = nums[i];
        }
        else if(nums[i] ==  el){
            cnt ++;
        }
        else{
            cnt --;
        }
    }
    int cnt1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == el) {
                cnt1++;
            }
        }
    if(cnt1 > nums.size()/2){
        return el;
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}