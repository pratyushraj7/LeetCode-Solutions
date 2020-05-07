class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) 
    {
        vector<int> a = depth(root, x, 0 , 0);
        vector<int> b = depth(root, y, 0, 0);
        
        if(a[0] != b[0] && a[1] == b[1])
            return true;
        return false;
    }
    
    vector<int> depth(TreeNode* root, int val, int p, int h)
    {
        if(root == NULL)
            return {};
            
        if(root->val == val)
            return {p, h};
            
        else
        {
            p = root->val;
            
            vector<int> l = depth(root->left, val, p, h+1);
            vector<int> r = depth(root->right, val, p, h+1);
            
            if(l.empty())
                return r;
            else
                return l;
        }
    }
};
