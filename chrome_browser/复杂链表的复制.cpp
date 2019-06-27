/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(!pHead) return NULL;
        map<RandomListNode*,RandomListNode* > m;
        RandomListNode* p1=pHead;
        RandomListNode* p2=new RandomListNode(p1->label);
        
        RandomListNode* newHead=p2;
        m[p1]=p2;
        while(p1){
            if(p1->next) p2->next=new RandomListNode(p1->next->label);
            else p2->next=NULL;
            
            
            p1=p2->next;
            p2=p2->next;
            m[p1]=p2;
        }
        p1=pHead;
        p2=newHead;
        while(p1){
         p2->random=m[p1->random] ;
         p1=p1->next;
         p2=p2->next;
        }
        
        return newHead;
        
    }
};