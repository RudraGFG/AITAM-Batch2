#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int rows = matrix.size();
    int cols = matrix[0].size();
    
    int newRows = cols;
    int newCols = rows;

    // Create a new matrix
    vector<vector<int>> transposed(newRows, vector<int>(newCols, 0));

    // Fill transposed matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    // Print transposed matrix
    cout << "Transpose of rectangular matrix:" << endl;
    for (int i = 0; i < newRows; i++) {
        for (int j = 0; j < newCols; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
