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
    int s=0;
    vector<vector<int> > res;
        vector<int> tmp;
    vector<vector<int> > FindPath(TreeNode* root,int sum) {
        if(!root) return {};
        
        tmp.push_back(root->val);
        s+=root->val;
        if(!root->left && !root->right){
            if(sum==s) {
                res.push_back(tmp);
                
            }
            s-=root->val;
            tmp.pop_back();
            // return res;
           
        }
        else{
            FindPath(root->left,sum);
        FindPath(root->right,sum);
        s-=root->val;
        tmp.pop_back();
        }
        return res;
    }
};
