/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        if(!pHead ||!pHead->next) return NULL;
        ListNode* slow =pHead;
        ListNode* fast =pHead;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                break;
            }
        }
        if(!fast || !fast->next) return NULL;
        fast=pHead;
        while(fast!=slow){
          fast=fast->next;
          slow=slow->next;
        }
        return fast;
        

    }
};