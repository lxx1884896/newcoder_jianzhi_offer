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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if(!pHead1 ) return pHead2;
        if(!pHead2 ) return pHead1;
        ListNode* head=new ListNode(-1);//人为建造一个随便元素的头结点
        head->next=NULL;
        ListNode* p=head;
        
        while(pHead1 && pHead2){
         
               
               if(pHead1->val <=pHead2->val) {
               
               p->next=pHead1;
               pHead1=pHead1->next;
               p=p->next;
           }
              else{
                  
                p->next=pHead2;
               pHead2=pHead2->next;
               p=p->next;   
              }
        }
          if(pHead1)  {
              p->next=pHead1;
          }   
             if(pHead2)  {
              p->next=pHead2;
          }   
          
         
       
        return head->next;
    }
};