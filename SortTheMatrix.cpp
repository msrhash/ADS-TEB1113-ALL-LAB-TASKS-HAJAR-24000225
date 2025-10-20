#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define N 3

void sortAllway(int arr[][N]) {

    vector<int> temp;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            temp.push_back(arr[i][j]);
        }
    }


    sort(temp.begin(), temp.end());

    int k = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = temp[k++];

        }
    }
}

int main()
{
    int arr[N][N] = { 1, 5, 3,
                     6, 7, 6,
                     4, 9, 8 };

    sortAllway(arr);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
