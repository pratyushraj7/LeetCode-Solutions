class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        unordered_map<char, int> map;
        vector<int> v;
        for(char c : p){
            map[c]++;
        }
        
        if(s.size() < p.size() || s.size() == 0)
            return v;
        
        int i = 0, j = 0;
        int counter = map.size();
        
        while(j < s.size())
        {    
            if(map.count(s[j]) == 1){
                map[s[j]]--;
                if(map[s[j]] == 0)
                    counter--;
            }
            
            j++;
            
            while(counter == 0)
            {
              if(j - i == p.size()){
                  v.push_back(i);
            }
                
            
            if(map.count(s[i]) == 1)
            {
                map[s[i]]++;
                if(map[s[i]] > 0)
                    counter++;
            }
                i++;
            }
        }
        return v;
    }
};
