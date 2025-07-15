class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& image, int oc, int nc, int r, int c){
        // base case
        if(i < 0 || j < 0 || i >= r || j >= c || image[i][j] != oc) return;

        // recursive case

        image[i][j] = nc;

        //L
        dfs(i, j-1, image, oc, nc, r, c);

        //R
        dfs(i, j+1, image, oc, nc, r, c);

        //T
        dfs(i-1, j, image, oc, nc, r, c);

        //B
        dfs(i+1, j,image, oc, nc, r, c);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int rows = image.size(), cols = image[0].size();

        int oldColor = image[sr][sc];

        if(oldColor == color) return image;

        dfs(sr, sc, image, oldColor, color, rows, cols);

        return image;
    }
};
