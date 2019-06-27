/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
*/

//1.右子树存在
//2.右子树不存在，
 //   2.1 该节点是父节点的左孩子
 //   2.2 该节点是父节点的右孩子
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
        
    {
       if (pNode == nullptr)
            return nullptr;
        if (pNode->right)
        {
            pNode = pNode->right;
            while (pNode->left )
                pNode = pNode->left;
            return pNode;
        }
        else
        {
            while (pNode->next )
            {
                if (pNode->next->left == pNode)
                    return pNode->next;
                pNode = pNode->next;
            }
            return nullptr;
        }

       }
        
        
   
};