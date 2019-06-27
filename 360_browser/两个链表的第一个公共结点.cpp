/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*//////////////还能使用栈，参考讨论区 Yannyezixin
class Solution {///////////只可能为Y字型或V字型
    
   /*这道题还有一种特别巧妙的方法，虽然题目中强调了链表中不存在环，但是我们可以用环的思想来做，
   我们让两条链表分别从各自的开头开始往后遍历，当其中一条遍历到末尾时，我们跳到另一个条链表的开头
   继续遍历。两个指针最终会相等，而且只有两种情况，一种情况是在交点处相遇，另一种情况是在各自的末尾
   的空节点处相等。为什么一定会相等呢，因为两个指针走过的路程相同，是两个链表的长度之和，所以一定会相等。*/
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        if(!pHead1 || !pHead2)  return NULL;
        ListNode* p1=pHead1;
        ListNode* p2=pHead2;
       while(p1!=p2){
           p1= (p1==NULL?pHead2:p1->next);
           p2=(p2==NULL?pHead1:p2->next);
           
           
       }
        
        return p1;
        
    }
};