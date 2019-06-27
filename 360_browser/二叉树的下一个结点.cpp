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

/*详细解释见寻找二叉树的中序遍历的下一个节点 - lx8211667846947的博客
- CSDN博客  https://blog.csdn.net/lx8211667846947/article/details/81639281

//二刷补充：剑指上的解法，本题突然想起来较难
牛客网剑指offer-二叉树的下一个结点 - yhn19951008的博客 - CSDN博客 
https://blog.csdn.net/yhn19951008/article/details/79433822

*/
class Solution {//本题中的next实际上代表的是父节点
   
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
     
     if(!pNode) return nullptr;
        
      if(pNode->right){
          pNode=pNode->right;
          while(pNode->left){
              pNode= pNode->left;
              
          }
          return  pNode;
         
          
      }
      else{
          
            
       while(pNode->next){
           if(pNode->next->left==pNode){
               return pNode->next;
               
           }
           
           pNode=pNode->next;
           
       }
      }
        
        return nullptr;
        
    }
};