/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/

//这种写法值得注意
// class Solution {
// public:
//     ListNode* ReverseList(ListNode* pHead) {
         
//         if(pHead==NULL) return NULL;//注意程序鲁棒性
         
//         ListNode* pNode=pHead;//当前指针
     
//         ListNode* pPrev=NULL;//当前指针的前一个结点
//         ListNode* pNext=NULL;
//         while(pNode!=NULL){//当前结点不为空时才执行
//            pNext=pNode->next;//链断开之前一定要保存断开位置后边的结点
             
  
//             pNode->next=pPrev;//指针反转
//             pPrev=pNode;
//             pNode=pNext;
//         }
//         return pPrev;        
//     }
// };

//c++之链表篇2：单向链表的反转（详细图文解读） - 迷途中的前进 - 
//CSDN博客  https://blog.csdn.net/ding977921830/article/details/52751490
// 1.就地反转法
   class Solution {
public:///////////////////最简单明了的方法
    ListNode* ReverseList(ListNode* head) {
        if (head == NULL || head->next==NULL)  return head;
           
      
	 stack<int> elem;
        ListNode* curr = head;
        while(curr != NULL) {
            elem.push(curr->val);
            curr = curr->next;
        }
        curr = head;
        while(curr != NULL) {
            curr->val = elem.top();
            curr = curr->next;
            elem.pop();
        }
        return head;

    }
       
   };




