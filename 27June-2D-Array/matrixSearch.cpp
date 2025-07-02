#include <bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                cout << "Element found at position (" << i << ", " << j << ")" << endl;
                return true;
            }
        }
    }

    cout << "Element not found in the matrix." << endl;
    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {7, 9, 11},
        {13, 15, 17}
    };

    int target = 9;

    search(matrix, target);

    return 0;
}
