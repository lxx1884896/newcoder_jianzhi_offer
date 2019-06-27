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
        void Mirror(TreeNode *pRoot) {
            if(!pRoot) return ;
            if(pRoot->left || pRoot->right){
                TreeNode* tmp=pRoot->left;
                pRoot->left=pRoot->right;
                pRoot->right=tmp;
            }
            if(pRoot->left) Mirror(pRoot->left);
            if(pRoot->right) Mirror(pRoot->right);
        }
    };