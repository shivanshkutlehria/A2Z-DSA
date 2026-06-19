#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    int n = mat.size();

    for (int k = 0; k < 4; k++) {

        bool same = true;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] != target[i][j]) {
                    same = false;
                    break;
                }
            }
            if (!same)
                break;
        }

        if (same)
            return true;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        for (int i = 0; i < n; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }

    return false;
}

int main() {
    
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<vector<int>> target = {
        {7, 4, 1},
        {8, 5, 2},
        {9, 6, 3}
    };

    if (findRotation(mat, target))
        cout << "True";
    else
        cout << "False";

    return 0;
}