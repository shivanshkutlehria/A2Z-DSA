#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> res;

    cin>>n;

    for(int i=1  ; i * i <= n ; i++){
        if(n % i == 0){
            res.push_back(i);
            if(i != n / i){
            res.push_back(n / i);
        }
        }
        
    }
    cout<<"Divisors are : "<<endl;
    for(int val : res){
        cout<< val << " ";
    }
    return 0;
}