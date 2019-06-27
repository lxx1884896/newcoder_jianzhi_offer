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
//1----------遍历完成输出第k个，树比较大时会浪费时间，2-----下面的方法：一边遍历一边找
//思路：二叉搜索树按照中序遍历的顺序打印出来正好就是排序好的顺序。
//     所以，按照中序遍历顺序找到第k个结点就是结果。
class Solution {
    
    public:
   int index = 0; //计数器
    TreeNode* KthNode(TreeNode *root, int k)
    {    if (!root) return nullptr;
        if(root){ //中序遍历为有序序列，可直接寻找第k个
            TreeNode* node = KthNode(root->left,k);
           
            if(node)
                return node;
            index ++;
            if(index == k)
                return root;
            node = KthNode(root->right,k);
            
            if(node)
              return node;
        }
        return nullptr;
    }
};