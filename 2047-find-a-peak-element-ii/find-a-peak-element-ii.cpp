class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int major1 = -1;
        int major2 = -1;

        for(int i = 0; i<mat.size(); i++)
        {
            for(int j = 0; j<mat[0].size(); j++)
            {
                if(major1 < mat[i][j])
                {
                    major1 = mat[i][j];
                }
            }
        }

        for(int i = 0; i<mat.size(); i++)
        {
            for(int j = 0; j<mat[0].size(); j++)
            {
                if(major2 < mat[i][j] && major2 < major1)
                {
                    major2 = mat[i][j];
                }
            }
        }

        for(int i = 0; i<mat.size(); i++)
        {
            for(int j = 0; j<mat[0].size(); j++)
            {
                if(mat[i][j] == major1 || mat[i][j] == major2)
                {
                    return {i,j};
                }
            }
        }

        return {};
    }
};