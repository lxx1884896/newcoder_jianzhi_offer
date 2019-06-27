/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {//////////////还能使用栈，参考讨论区 Yannyezixin
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        if(!pHead1 || !pHead2) return NULL;
        ListNode* p1=pHead1;
        ListNode* p2=pHead2;
        int length1=getLength(p1);
        int length2=getLength(p2);
        if(length1<length2){
            for(int i=0;i<length2-length1;i++){
                p2=p2->next;
            }
        }
        else{
            for(int i=0;i<length1-length2;i++){
                p1=p1->next;
            }
        }
        while(p1){
           if(p1->val!=p2->val) {
               
               p1=p1->next;
               p2=p2->next;
           }
            else{break;}
            
        }
        
        return p1;
    }
    
    int getLength(ListNode* p){
        int cnt=0;
        while(p){
            cnt++;
            p=p->next;
        }
        return cnt;
    }
};