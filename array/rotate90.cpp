#include<bits/stdc++.h>
using namespace std;    
vector<vector<int>> rotate90(vector<vector<int>>& matrix, int n, int m) {
//     vector<vector<int>> rotated(m, vector<int>(n, 0));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             rotated[j][n - 1 - i] = matrix[i][j];
//         }
//     }

//     return rotated;
// }
int o=matrix.size();
for(int i=0;i<o-1;i++){
    for(int j=i+1;j<o;j++){
        swap(matrix[i][j],matrix[j][i]);
    }
}
//traverse
for(int i=0;i<o;i++){
    reverse(matrix[i].begin(),matrix[i].end());
}
return matrix;
}
int main() {
    vector<vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> res = rotate90(matrix, n, m);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
