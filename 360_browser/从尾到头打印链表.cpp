/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
        if(!head) return res;
        ListNode* p=head;
        
        //while(p->next!=NULL){//p->next!=NULL应该是指p的next域不为空
         //   res.insert(res.begin(),p->val);
         //   p=p->next;
        //}
        
        //res.insert(res.begin(),p->val);
        while(p!=NULL){//这几行和上面被注释的几行作用一样，都能通过
            res.insert(res.begin(),p->val);
            p=p->next;
        }
       
        
        return res;
    }
};