#include <bits/stdc++.h>
using namespace std;

int main() {
    // Define a 2D matrix (3 rows, 4 columns)
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int rows = matrix.size();
    int cols = matrix[0].size();

    cout << "Matrix traversal:" << endl;

    // Traverse the matrix row by row
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
