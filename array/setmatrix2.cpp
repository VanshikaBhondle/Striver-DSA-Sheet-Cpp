#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeromatrix(vector<vector<int>>& matrix, int m, int n) {

    int col0 = 1; // to track if first column needs to be zero

    // Step 1: Mark the rows and columns that must be zero
    for (int i = 0; i < m; i++) {
        if (matrix[i][0] == 0) col0 = 0;  // first column marker

        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;   // mark first col
                matrix[0][j] = 0;   // mark first row
            }
        }
    }

    // Step 2: Set matrix cells to zero based on the markers
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Step 3: Zero out the first row if needed
    if (matrix[0][0] == 0) {
        for (int j = 0; j < n; j++) {
            matrix[0][j] = 0;
        }
    }

    // Step 4: Zero out the first column if needed
    if (col0 == 0) {
        for (int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }

    return matrix;
}

int main() {
    vector<vector<int>> matrix = { {1,1,1}, {1,0,1}, {1,1,1} };

    int m = matrix.size();
    int n = matrix[0].size();

    vector<vector<int>> res = zeromatrix(matrix, m, n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
