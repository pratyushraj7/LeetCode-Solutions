class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> v;
        int i=0, j=0;
        while(i < A.size() && j < B.size())
        {
            int x = max(A[i][0], B[j][0]);
            int y = min(A[i][1], B[j][1]);
            
            if(x <= y)
                v.push_back({x,y});
                
            if(y == A[i][1])
                i++;
                
            else
                j++;
        }
        return v;
    }
};
