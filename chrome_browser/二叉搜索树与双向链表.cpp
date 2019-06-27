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
    TreeNode* head=NULL;
    TreeNode* real_head=NULL;
    TreeNode* Convert(TreeNode* root)
    {
        if(!root) return NULL;
        inorder(root);
        
        return real_head;
    }
    
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        if(!head){
            head=root;
            real_head=root;
        }
        else{
             head->right=root;
        root->left=head;
        head=root;
        }
        inorder(root->right);
        
    }
    
    
};