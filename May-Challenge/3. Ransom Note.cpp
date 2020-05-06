class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<int,int> up;
        
        for(int i=0;i<magazine.size();i++)
            up[magazine[i]]++;
        
        for(int i=0;i<ransomNote.size();i++)
        {
            up[ransomNote[i]]--;
                if( up[ransomNote[i]]<0)
                    return false;
        }
        
        return true;
}
};
