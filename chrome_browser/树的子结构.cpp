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
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(!pRoot1 || !pRoot2) return false;
        bool flag=one_has_two(pRoot1,pRoot2);
        if(!flag)
            flag=HasSubtree(pRoot1->left,pRoot2);
        if(!flag)
            flag=HasSubtree(pRoot1->right,pRoot2);
        return flag;
        
        

    }
    bool one_has_two(TreeNode* root1,TreeNode* root2){
        if(!root2) return true;
        if(!root1) return false;
        if(root1->val!=root2->val) return false ;
        return  one_has_two(root1->left,root2->left)&& one_has_two(root1->right,root2->right);
    }
};