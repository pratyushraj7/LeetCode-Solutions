class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int count = 0;
        
        for(int num : nums)
            map[num]++;
        
        for(auto s : map)
        {
            if(s.second > nums.size()/2){
                count = (s.first);
                break;
            }
        }
        return count;
    }
};
