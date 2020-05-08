class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        if(coordinates.size() == 2)
            return true;
            
        int y1 = coordinates[0][1];
        int x1 = coordinates[0][0];
        
        int y = coordinates[1][1] - coordinates[0][1];
        int x = coordinates[1][0] - coordinates[0][0];
        
        for(int i=2 ; i<coordinates.size() ; i++)
        {
            int y2 = coordinates[i][1];
            int x2 = coordinates[i][0];
            
            if(y*(x2 - x1) != x*(y2 - y1))
                return false;
        }
        return true;
    }
};
