#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>>& mat) {
    int m = mat.size();
    int n = mat[0].size();

    // Create a new matrix with rotated dimensions (n x m)
    vector<vector<int>> res(n, vector<int>(m));

    // Rotate the matrix 90 degrees clockwise
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            res[j][m - 1 - i] = mat[i][j];
        }
    }

    return res;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    vector<vector<int>> res = rotateMatrix(mat);

    cout << "Rotated Matrix:" << endl;
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
