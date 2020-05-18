class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> map;
        
        for(char c : s1)
            map[c]++;
        
        int i=0, j=0;
        int len = 0;
        int c = map.size();
        
        while(j < s2.size())
        {
            if(map.count(s2[j]) == 1)
            {
                map[s2[j]]--;
                if(map[s2[j]] == 0)
                    c--;
            }
            
            j++;
            
            while(c == 0)
            {
                if(j - i == s1.size())
                    return true;
                
                if(map.count(s2[i]) == 1)
                  {
                    map[s2[i]]++;
                    if(map[s2[i]] > 0)
                      c++;
                  }
                
                i++;
            }
        }
        return false;
    }
};
