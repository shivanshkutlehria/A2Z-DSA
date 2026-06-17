#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int count = 0; //can add for 0. (if/else)
    while(n > 0){
        n = n/ 10;
        count++;
    }
    cout<<count;
    return 0;
}