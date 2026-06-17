#include <iostream>

#include <vector>

using namespace std;

int main() {
    int n;
    int cnt = 0;
    cin>> n;

    for(int i = 1; i * i <= n ; i++ ){
        if(n % i == 0){
            cnt++;
            if(i != n / i){
                cnt ++;
            }
        }
    }
    if(cnt == 2) cout<< "PRIME";
    if(cnt > 2) cout<< "NOT PRIME";

    return 0;
}