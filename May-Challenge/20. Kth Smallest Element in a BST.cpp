class Solution {
public:
    int kthSmallest(TreeNode* root, int k) 
    {
        vector<int> result;
        stack<TreeNode*> q;
        while(root || !q.empty())
        {
            while(root)
            {
                q.push(root);
                root= root->left;
            }
            root = q.top();
                q.pop();
                result.push_back(root->val);
                root = root->right;
        }
        return result[k-1];
        
    }
};
