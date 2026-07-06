class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int cols = mat[0].size();

        vector<vector<int>> ans(r, vector<int>(c));

        if((rows * cols) != (r*c))
        {
            return mat;
        }

    int count = 0;
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j< cols; j++)
            {
                ans[count/c][count%c] = mat[i][j];
                count++;
            }
        }

        return ans;
    }
};