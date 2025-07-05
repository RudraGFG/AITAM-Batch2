class Solution {
public:
    bool isSafe(int n, int row, int col, vector<string>& board){
        // horizontally
        for(int j=0; j<n; j++){
            if(board[row][j] == 'Q') return false;
        }

        // vertically
        for(int i=0; i<n; i++){
            if(board[i][col] == 'Q') return false;
        }

        // right diagonal
        int newr = row, newc = col;
        while(newr >= 0 && newc < n){
            if(board[newr][newc] == 'Q') return false;

            newr--;
            newc++;
        }

        // left diagonal
        newr = row, newc = col;
        while(newr >= 0 && newc >= 0){
            if(board[newr][newc] == 'Q') return false;

            newr--;
            newc--;
        }

        return true;
    }
    void f(int n, vector<string>& board, vector<vector<string>>& ans, int row){
        // base case
        if(row == n){
            ans.push_back(board);
            return;
        }

        // recursive case

        for(int col=0; col<n; col++){
            // i will check that the cell is safe or not
            // if it is safe then i will place the queen
            // pass rest of the rows to recursion
            if(isSafe(n, row, col, board)){
                board[row][col] = 'Q';
                f(n, board, ans, row+1);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;

        vector<string> board(n, string(n, '.'));

        f(n, board, ans, 0);

        return ans;
    }
};
