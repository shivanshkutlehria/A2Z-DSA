//Functional recursion(when we want to return something from the function)
// in parametrized recursion , we would take two parameters named n and sum, and would add n to sum in every function call.
#include <iostream>

#include <vector>

using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }
    return n + sum(n - 1);
}

int main() {
    int n;
    cin>>n;

    cout << sum(n);
    return 0;
}