//Euclidean Algo
#include <iostream>

#include <vector>

using namespace std;

int main() {
    int a;
    int b;
    cin>> a;
    cin>> b;

    while(a>0 && b>0){
        if(a>b){
            a = a % b;
        }
        else{
            b = b % a;
        }
        if(a == 0){
            cout << "GCD is: " << b << endl;
        }
        if(b==0){
        cout << "GCD is: " << a << endl;
        }
    }
    
    return 0;
}