/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {//（剑指Offer）面试题56：链表中环的入口结点 - 
    //AndyJee - 博客园  https://www.cnblogs.com/AndyJee/p/4705846.html
public://二刷补充：还有一个快慢指针的做法
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        if(pHead==NULL || pHead->next==NULL)
            return NULL;
        set<ListNode*> listSet;
        while(pHead!=NULL){
            if(listSet.find(pHead)==listSet.end()){
                listSet.insert(pHead);
                pHead=pHead->next;
            }
            else
                return pHead;
        }
        return NULL;
        
    }
};