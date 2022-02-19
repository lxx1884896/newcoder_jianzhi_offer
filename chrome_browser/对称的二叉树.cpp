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
    bool isSymmetrical(TreeNode* pRoot)
    {
        if(!pRoot) return true;
        return  duichen(pRoot->left,pRoot->right);
    }
    
    bool duichen(TreeNode* p1,TreeNode* p2){
        if(!p1 &&!p2){
            return true;
        }
        if(!p1 ||!p2) return false;
        
        if(p1->val!=p2->val) return false;
           return duichen(p1->left,p2->right)&&duichen(p1->right,p2->left); 
        
    }

};

//对称的二叉树非递归

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
    bool isSymmetrical(TreeNode* pRoot) {
        if (!pRoot)
            return true;
        queue<TreeNode*> q; // 定义队列
        q.push(pRoot); q.push(pRoot); // 根结点入队两次
        while (!q.empty()) {
            TreeNode* n1 = q.front();
            q.pop();
            TreeNode* n2 = q.front();
            q.pop();
           
            if (!n1 && !n2) // 判断是否全部为空
                continue;
            if(!n1 || !n2) return false;
            if (n1->val != n2->val) // 判断值是否相等
                return false;
            // 将四个孩子入队列
            q.push(n1->left); q.push(n2->right);
            q.push(n1->right); q.push(n2->left);
        }
        return true;
    }

};