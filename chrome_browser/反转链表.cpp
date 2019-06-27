/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/

  
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
         
        if(pHead==NULL) return NULL;//注意程序鲁棒性
         
        ListNode* pNode=pHead;//当前指针
     
        ListNode* pPrev=NULL;//当前指针的前一个结点
        ListNode* pNext=NULL;
        while(pNode!=NULL){//当前结点不为空时才执行
           pNext=pNode->next;//链断开之前一定要保存断开位置后边的结点
             
  
            pNode->next=pPrev;//指针反转
            pPrev=pNode;
            pNode=pNext;
        }
        return pPrev;        
    }
};