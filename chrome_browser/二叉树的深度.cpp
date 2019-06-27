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
    
    int TreeDepth(TreeNode* pRoot)
    {    int left=0,right=0;
        if(!pRoot) return 0;
        if(pRoot->left) 
            left=TreeDepth(pRoot->left);
        if(pRoot->right) 
            right=TreeDepth(pRoot->right);
        return max(left,right)+1;
    
    }
};