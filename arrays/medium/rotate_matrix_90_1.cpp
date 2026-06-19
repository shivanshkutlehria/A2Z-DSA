//BRUTE FORCE : O(nm)
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> result(n , vector<int> (m));
    
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ;j++){
            result[i][j] = matrix[m - 1 - j][i];
        }
    }
    return result;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<vector<int>> rotated = rotateMatrix(mat);

     for (auto row : rotated) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}