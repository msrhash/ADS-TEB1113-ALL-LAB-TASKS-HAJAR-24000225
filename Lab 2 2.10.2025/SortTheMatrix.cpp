#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortMatrix(vector<vector<int>>& mat) {
    vector<int> temp;
    int rows = mat.size();
    int cols = mat[0].size();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            temp.push_back(mat[i][j]);
        }
    }

    sort(temp.begin(), temp.end());

    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = temp[k];
            k++;
        }
    }
}

int main() {
    vector<vector<int>> mat = {
        {8, 1, 3},
        {2, 9, 4},
        {7, 5, 6}
    };

    sortMatrix(mat);

    cout << "Sorted Matrix:\n";
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
