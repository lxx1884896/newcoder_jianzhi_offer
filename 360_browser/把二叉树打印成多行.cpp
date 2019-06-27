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
class Solution {
public:
        vector<vector<int> > Print(TreeNode* www) {
            
            vector<vector<int>>  res;
            
            if(!www) return res;
            
            queue<TreeNode*> q;
            
            
            
            q.push(www);
            
            while(!q.empty()){
               int len=q.size();
               vector<int> tmp;
                for(int i=0;i<len;i++){
                    
                    TreeNode* f=q.front();
                    
                    tmp.push_back(f->val);
                    
                    q.pop();
                    if(f->left) q.push(f->left);
                    if(f->right) q.push(f->right);
                }
                res.push_back(tmp);
            }
            
            return res;
        
        }
    
};