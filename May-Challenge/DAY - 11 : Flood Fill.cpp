class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        func(image, sr, sc, newColor, image[sr][sc]);
        return image;
    }
    
    
    
    void func(vector<vector<int>>& v, int sr, int sc, int newColor, int oldColor)
    {
        if(sr < 0 || sc < 0 || sr >= v.size() || sc >= v[0].size() || v[sr][sc] == newColor)
            return;
        
        if(v[sr][sc] == oldColor)
        {
            v[sr][sc] = newColor;
            
            func(v, sr+1, sc, newColor, oldColor);
            func(v, sr-1, sc, newColor, oldColor);
            func(v, sr, sc+1, newColor, oldColor);
            func(v, sr, sc-1, newColor, oldColor);
        }
    }
};
