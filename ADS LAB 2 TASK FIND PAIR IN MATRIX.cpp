#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

#define N 5

// Function to find the maximum value of mat[d][e] - mat[a][b]
// such that d > a and e > b
int findMaxValue(int mat[][N]) {
    int maxValue = INT_MIN;

    // Try all possible pairs (a, b) and (d, e)
    for (int a = 0; a < N - 1; a++) {
        for (int b = 0; b < N - 1; b++) {
            for (int d = a + 1; d < N; d++) {
                for (int e = b + 1; e < N; e++) {
                    int currentValue = mat[d][e] - mat[a][b];
                    if (currentValue > maxValue) {
                        maxValue = currentValue;
                    }
                }
            }
        }
    }

    return maxValue;
}

int main() {
    int mat[N][N] = {
        { 1,  2, -1, -4, -20 },
        { -8, -3,  4,  2,   1 },
        { 3,  8,  6,  1,   3 },
        { -4, -1,  1,  7,  -6 },
        { 0,  -4, 10, -5,   1 }
    };

    int result = findMaxValue(mat);
    cout << "Maximum value is: " << result << endl;

    return 0;
}
