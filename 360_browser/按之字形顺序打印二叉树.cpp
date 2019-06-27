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

struct newnode{
    TreeNode* tnode;
    
    int level;
    
    newnode(TreeNode* node,int l):tnode(node),level(l){}
    
};
class Solution {
public:
    vector<vector<int> > Print(TreeNode* pRoot) {
        vector<vector<int> > res;
        vector<int> tmp;
        if(!pRoot) return res;
        int cnt=0;
        queue<newnode*> q;
        
        newnode* root=new newnode(pRoot,0);
        q.push(root);
        while(!q.empty()){
            newnode* f=q.front();
            
            q.pop();
            
            if(f->level>cnt){
              
                if(cnt%2==1)
               reverse(tmp.begin(),tmp.end());
                res.push_back(tmp);
                tmp.clear();
                cnt=f->level;
            }
            
            tmp.push_back(f->tnode->val);
            
            if(f->tnode->left){
                newnode* left=new newnode(f->tnode->left,f->level+1);
                q.push(left);
            }
            
              if(f->tnode->right){
                newnode* right=new newnode(f->tnode->right,f->level+1);
                q.push(right);
            }
            
        }
        if(cnt%2==1)
               reverse(tmp.begin(),tmp.end());
        res.push_back(tmp);
        
        return res;
        
    }
    
};