class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        unordered_map<int, int> map, map2;
        
        for(int i=0 ; i<trust.size() ; i++)
        {
            map[trust[i][0]]++;
            map2[trust[i][1]]++;
        }
        
        for(int i=1 ; i<=N ; i++)
        {
            if(map.count(i) == 0)
            {
                if(map2[i] == N-1)
                    return i;
            }
        }
        return -1;
    }
};
