#include <iostream>

#include <vector>

using namespace std;

void namee(int n){
    if(n==0){
        return;
    }
    string name = "Shivansh";
    cout<<name<<endl;
    n--;
    namee(n);
}

int main() {
    int n ;
    cin>>n;
    namee(n);
    return 0;
}