/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {  if(!pRoot || k<=0) return NULL;
     vector<TreeNode*> res;
     zhongxu(pRoot,res);
     if(res.size()<k) return NULL;
     return res[k-1];
     
        
    }
    
    void zhongxu(TreeNode* root,vector<TreeNode*> &res){
        if(!root) return;
     if(root->left)   zhongxu(root->left,res);
        res.push_back(root);
        if(root->right) zhongxu(root->right,res);
    }

    
};