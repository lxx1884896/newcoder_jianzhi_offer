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
        if(!root) return {};
        vector<int> res;
        queue<TreeNode* >  q;
        q.push(root);
        while(!q.empty()){
           TreeNode* tmp=q.front();
            q.pop();
            res.push_back(tmp->val);
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }
        return res;
    }
};