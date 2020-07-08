class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int c = 0;
        vector<vector<int>> dp(matrix.size());
        
        for(int i=0 ; i<matrix.size() ; i++)
        {
            for(int j=0 ; j<matrix[0].size() ; j++)
            {
                
                if(i>0 && j>0 && matrix[i][j] > 0)
                    matrix[i][j] = 1 + min(matrix[i-1][j], min(matrix[i-1][j-1], matrix[i][j-1]));
                
                c += matrix[i][j];
            }
        }
        return c;
    }
};
