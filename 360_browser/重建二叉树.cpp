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
        
        if((pre.empty()) || (vin.empty())) return NULL;
        
        return  helper(pre,vin,0,pre.size()-1,0,vin.size()-1);
        
        

    }
    
    TreeNode* helper(vector<int> &pre,vector<int>&vin,int pre_start,int pre_end,int in_start,int in_end){
        if((pre_start>pre_end) || (in_start>in_end))  return NULL;
        
        TreeNode* res=new TreeNode(pre[pre_start]);
        
        int tmp;
        
        for(int i=in_start;i<vin.size();i++){
            
            if(vin[i]==res->val){
             tmp=i;
                
             break;
                
            }
        }
        int left_nums=tmp-in_start;
        
        res->left=helper(pre,vin,pre_start+1,pre_start+left_nums,in_start,tmp-1);
        
        res->right=helper(pre,vin,pre_start+left_nums+1,pre_end,tmp+1,in_end);
        
        return res;
        
        
    }
};