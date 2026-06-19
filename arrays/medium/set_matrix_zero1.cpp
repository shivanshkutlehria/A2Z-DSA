// BRUTE FORCE APPROACH TAKES TOO MUCH TIME COMPLEXITY ABOUT O(N^3), Here is the better approach (NOT OPTIMAL).
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> setZeroes(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> row (n, 0);
    vector<int> col (m, 0);

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j ++){
            if(row[i] || col[j] == 1){
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

int main() {
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(matrix);

    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}