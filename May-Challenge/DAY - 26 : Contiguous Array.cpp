class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        int s = 0;
        int c = 0;
        unordered_map<int, int> map;
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i] == 0)
                nums[i] = -1;
        }
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            s += nums[i];
            if(s == 0)
                c = i+1;
            
            if(map.find(s) != map.end())
                c = max(c, (i-map[s]));
            else
                map[s] = i;
        }
        
        return c;
    }
};
