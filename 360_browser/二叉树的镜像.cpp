/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
//看出来是将每一层的数都给reverse了，能这样读出来，但怎样再给存到树结构中去
//该题目的意图在于，当根节点不为空的情况下，如果左右子树不全为空，则交换左右子树。
//（左右子树都为空没有交换的必要。）因此使用前序遍历的方式。
//如果根不为空，左子树不为空或者右子树不为空，则交换左子树和右子树。
//然后对根的左子树和右子树做同样的操作。
/////////////////////////////////////剑指offer中就是这个唯一思路
class Solution {
public:
    void Mirror(TreeNode *pRoot) {
        
        if(pRoot){
            
            if(pRoot->left || pRoot->right){
                
                TreeNode* tmp=pRoot->left;
                pRoot->left=pRoot->right;
                pRoot->right=tmp;
            }
            
            Mirror(pRoot->left);
            Mirror(pRoot->right);
        }
        
       

    }
};