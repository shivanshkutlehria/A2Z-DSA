#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int o = n;
    int m = 0;
    while( n > 0){
        int temp = n % 10;
        m = m*10 + temp;
        n = n/10;
    }
    if(o == m) {
        cout<<"palindrome";
    }
    else{
        cout<<"not";
    }

    return 0;
}