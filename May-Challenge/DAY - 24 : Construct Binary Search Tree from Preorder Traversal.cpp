class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        if(preorder.size() == 0)
            return NULL;
        
        TreeNode* root;
        
        for(auto x : preorder)
            func(x, root);
        
        return root;
    }
    
    TreeNode* func(int v, TreeNode*& root)
    {
        if(!root)
            root = new TreeNode(v);
            
        if(v > root->val)
            root->right = func(v, root->right);
            
        if(v < root->val)
            root->left = func(v, root->left);
        
        return root;
    }
};
