/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.size()==0 || vin.size()==0) return NULL;
       
        
       return  helper(pre,vin,0,pre.size()-1,0,vin.size()-1);
        
       
        
    }
    
    TreeNode* helper(vector<int> &pre,vector<int> &vin,int p_s,int p_e,int v_s,int v_e){
        
        if (p_s>p_e || v_s>v_e)  return NULL;
        TreeNode* root=new TreeNode(pre[p_s]);
        int k;
        for(int i=v_s;i<vin.size();i++){
            if(vin[i]==root->val){
                 k=i;
                break;
            }
        }
       int left_nums=k-v_s;
        root->left=helper(pre,vin,p_s+1,p_s+left_nums,v_s,k-1); 
        root->right=helper(pre,vin,p_s+left_nums+1,p_e,k+1,v_e); 
        return root;
        
    }
};