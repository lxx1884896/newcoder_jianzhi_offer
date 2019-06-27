/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {//递归地进行合并
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {if (!pHead1) return pHead2;
     if(!pHead2) return pHead1;
     
     ListNode* mergenode=NULL;
     
     if(pHead1->val<pHead2->val){
         
         mergenode=pHead1;
         mergenode->next=Merge(pHead1->next,pHead2);
         
     }
     else{
         
         mergenode=pHead2;
         mergenode->next=Merge(pHead1,pHead2->next);
     }
     
     return mergenode;
        
    }
};




作者：呱牛
链接：https://www.nowcoder.com/questionTerminal/d8b6b4358f774294a89de2a6ac4d9337
来源：牛客网

非递归版本，新申请一个节点，可以少好多判断：
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode newHead(0); //建立一个新的头节点
        ListNode *pNewTail = &newHead;//尾指针指向头节点
        
        //两个链表都不为空时，比较头节点的值大小
        while(pHead1 && pHead2)
        {
            if(pHead1->val <= pHead2->val)
            {
                pNewTail->next = pHead1;
                pNewTail = pNewTail->next;
                pHead1 = pHead1->next;
            }
            else
            {
                pNewTail->next = pHead2;
                pNewTail = pNewTail->next;
                pHead2 = pHead2->next;
            }
        }
        
        //尾指针指向不为空的节点；如果都为空，则指向空
        pNewTail->next = pHead1 ? pHead1 : pHead2;

        return newHead.next;
    }
};