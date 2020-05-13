class Solution {
public:
    string removeKdigits(string num, int k) 
    {
        string s;
        
        for(int i=0 ; i<num.size(); i++)
        {
            while(s.size() && num[i] < s.back() && k){
                s.pop_back();
                k--;
            }
            
            s.push_back(num[i]);
        }
        
        while(k)
        {
           s.pop_back();
                k--; 
        }
        
        while(s[0] == '0')
            s.erase(0,1);
        
        if(s == "")
            return "0";
        
        return s;
        
    }
};
