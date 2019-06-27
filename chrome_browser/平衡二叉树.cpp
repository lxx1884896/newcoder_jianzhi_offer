class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        
        int depth=0;
       return helper(pRoot,depth);

    }
    
    bool helper(TreeNode* root,int& depth){
       if(!root){
           depth=0;
           return true;
       };
        int left,right;
        if(helper(root->left,left) &&helper(root->right,right) ){
            int diff=abs(right-left);
            if(diff<=1){
                depth=1+ (left>right? left:right);
                return true;
            }
        }
        return false;
    }
};