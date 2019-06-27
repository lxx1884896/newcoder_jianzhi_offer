/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/

//这是一个通用方法
/*
class Solution {
public:
    bool isSymmetrical(TreeNode* root)
    {
        if(!root) return true;
        
        return duichen(root->left,root->right);
    
    }
    
    bool duichen(TreeNode* p1,TreeNode* p2){
        if(!p1 && ! p2){
            
            return true;
        }
        
        if(!p1 || !p2){
            return false;
        }
        
        if(p1->val !=p2->val) return false;
        
        return duichen(p1->left,p2->right) && duichen(p1->right,p2->left);
        
    }

};
*/
-----------------------------------------------------------------
class Solution {
public:
    bool isSymmetrical(TreeNode* root){
         
        
     
       
      
    if(!root) return true; 
        
     TreeNode* tmp=copy(root);
    TreeNode* root2=get_jingxiang(root);
        
      //cout<<root2->left->left->val;
        
     
        return same(tmp,root2);
     
    
    }
    
    bool same(TreeNode* root,TreeNode* root2){
        
         if(!root && !root2) return true;
     
     if(!root || !root2) return false;
     
     if(root->val==root2->val) {
         
         return (same(root->left,root2->left)) &&( same(root->right,root2->right));
     }
     
     else return false;
    
    }
    
    TreeNode* get_jingxiang(TreeNode* root){
    
    
   if(root){
       
        if(root->left || root->right){
        
        TreeNode* tmp=root->left;
        
        root->left=root->right;
        
        root->right=tmp;
    }
    get_jingxiang(root->left);
    get_jingxiang(root->right);
   }
    
    return root;
    
    
}
      TreeNode* copy(TreeNode* root){
          if(!root) return nullptr;
          TreeNode* t=new TreeNode(root->val);
          
          t->left=copy(root->left);
          
          t->right=copy(root->right);
          
          return t;
      } 
    
    

};

