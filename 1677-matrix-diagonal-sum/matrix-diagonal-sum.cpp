class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int d1 = 0;
        int d2 = 0 ;

        int row = mat[0].size();
        int col = mat.size();

        int n = mat[0][0];
        if(row && col == 1)
        {
            return n;
        }
        int j = mat.size() - 1;
        for(int i = 0; i<row; i++)
        {
            if(!(row % 2 != 0 && i == j))
            {
                d2 += mat[i][j];
            }
            d1 += mat[i][i];
            j--;
        }

        return d1 + d2;
    }
};