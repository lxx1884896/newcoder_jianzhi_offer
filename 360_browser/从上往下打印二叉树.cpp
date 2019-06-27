/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        
        queue<TreeNode*>  q;
        vector<int> res;
        if(!root) return res;
        q.push(root);
       // res.push_back(root->val);
        while(!q.empty()){
           
            
            
                
                TreeNode* tmp=q.front();
                res.push_back(tmp->val);
                q.pop();
                if(tmp->left) q.push(tmp->left);
                
                if(tmp->right) q.push(tmp->right);
            
            
        }
        
        return res;

    }
};