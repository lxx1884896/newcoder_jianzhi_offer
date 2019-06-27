class Solution {
public://二刷补充：一般的直接判断深度差的会遍历重复节点，剑指上后序遍历的不会，
    //相当于从下往上遍历的，有不满足的就返回了
    bool IsBalanced_Solution(TreeNode* pRoot) {
        
        if(!pRoot) return true;
        
        return IsBalanced_Solution(pRoot->left) &&IsBalanced_Solution(pRoot->right)&& (abs(depth(pRoot->left)-depth(pRoot->right))<=1);

    }
    
    int depth(TreeNode* root){
        if(!root) return 0;
        
         int left=depth(root->left);
        int right=depth(root->right);
        return max(left,right)+1;
        
    }
};