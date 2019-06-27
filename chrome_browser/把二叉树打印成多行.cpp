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
        vector<vector<int> > Print(TreeNode* pRoot) {
             if(!pRoot) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(pRoot);
       
        while(!q.empty()){
           int size=q.size(); 
             vector<int> tmp;
            
            for(int i=0;i<size;i++){
                TreeNode* front=q.front();
                q.pop();
                tmp.push_back(front->val);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                
            }
            
                res.push_back(tmp);
        }
        return res;
        }
    
};