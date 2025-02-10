#include <bits/stdc++.h>
using namespace std;

int main() {
    int row = 5;
    int col = 5;
    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    int maxIndex = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == 1) {
                row = i + 1;
                col = j + 1;
            }
        }
    }

    maxIndex = abs(row-3) + abs(col-3);

    cout << maxIndex << endl;

    return 0;
}
