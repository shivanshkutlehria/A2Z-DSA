#include <iostream>

#include <vector>

using namespace std;

void numbers(int n , int count){
    if(count == n + 1){
        return;
    }
    numbers(n, count + 1);
    cout<<count<<endl;
}
//Also check striver's sheet for another code , directly n by current. not used count variable.
int main() {
    int n ;
    cin>>n;
    numbers(n, 1);
    return 0;
}