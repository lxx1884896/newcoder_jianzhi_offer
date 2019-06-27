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
        vector<int > res;
        if(!head) return res;
        ListNode* p=head;
        while(p->next){
            res.insert(res.begin(),p->val);
            p=p->next;
            
        }
        res.insert(res.begin(),p->val);
        return res;
    }
};