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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
       // ListNode* res;
        vector<ListNode*> res;     
        if(!pListHead || k==0) return NULL;
        ListNode* p=pListHead;
       
        while(p){
           res.insert(res.begin(),p); 
           p=p->next; 
        }
        
        return res[k-1];
        
    }
};