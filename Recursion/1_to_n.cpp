#include <iostream>

#include <vector>

using namespace std;

void numbers(int n, int count){
    if( count == n + 1){
        return;
    }
    cout<<count<<endl;
    numbers(n, count + 1);
}

int main() {
    int n;
    cin>>n;
    numbers(n, 1);
    return 0;
}