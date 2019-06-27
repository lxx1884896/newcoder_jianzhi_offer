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
       int cnt=0;
        while(!q.empty()){
           int size=q.size(); 
             vector<int> tmp;
            cnt++;
            for(int i=0;i<size;i++){
                TreeNode* front=q.front();
                q.pop();
                tmp.push_back(front->val);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                
            }
            if((cnt&1)==0) sort(tmp.rbegin(),tmp.rend());
                res.push_back(tmp);
        }
        return res;
        
    }
    
};