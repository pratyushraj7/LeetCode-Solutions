class Solution {
public:
    static bool comp(pair<vector<int>, double>& a, pair<vector<int>, double>& b){
        return a.second < b.second;
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) 
    {
        vector<vector<int>> v;
        vector<pair<vector<int>,double>> res;
        
        
        for(int i=0 ; i<points.size() ; i++)
        {
            double s = sqrt(points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            res.push_back(make_pair(points[i], s));
            s = 0;
        }
        
        sort(res.begin(), res.end(), comp);
        
        for(int i=0 ; i<K ; i++)
            v.push_back(res[i].first);
        
        return v;
    }
};
