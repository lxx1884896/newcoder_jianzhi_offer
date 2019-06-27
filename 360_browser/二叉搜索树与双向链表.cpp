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
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(pRootOfTree == nullptr) return nullptr;
        TreeNode* pre = nullptr;
         
        convertHelper(pRootOfTree, pre);
         
        TreeNode* res = pRootOfTree;
        while(res ->left)
            res = res ->left;
        return res;
    }
     
    void convertHelper(TreeNode* cur, TreeNode*& pre)
    {
        if(cur == nullptr) return;
         
        convertHelper(cur ->left, pre);
        /*中序遍历，下面三行为放在左递归和右递归之间的操作，
        如果当前节点不为空节点，则将当前节点的左节点指向刚遍历过的节点；
        如果刚遍历过的节点不为空，则将该节点的右指针指向当前节点。
        然后将刚遍历的节点更新为当前节点。*/
        cur ->left = pre;
        if(pre) pre ->right = cur;
        pre = cur;
  ///////////////////////////////////////////       
        convertHelper(cur ->right, pre);
         
         
         
    }
};