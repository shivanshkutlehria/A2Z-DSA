#include <iostream>
#include <cmath>
using namespace std;

int intPow(int base, int exp) {
    int result = 1;
    while (exp--) result *= base;
    return result;
}

bool armstrong(int x){
    if (x < 0) return false;
    if (x == 0) return true;

    int n = x;
    int count = 0;
    int temp = n;
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    int sum = 0;
    while (x > 0){
        int digit = x % 10;
        sum += intPow(digit, count);
        x /= 10;
    }

    return sum == n;
}
int main() {
    int x;
    cin>>x;
    cout<< armstrong(x);
    return 0;
}