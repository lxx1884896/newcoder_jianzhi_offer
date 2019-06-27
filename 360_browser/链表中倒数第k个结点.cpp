/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
//两个指针之间的间距是（k-1），后面的一个指向最后一个，则前面的一个指向倒数第k个
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(!pListHead || k==0) return NULL;
        
        ListNode* p=pListHead;
         ListNode* pre=pListHead;
       int i=0;
       for(;p!=NULL;i++){
           
            if(i>=k){
                pre=pre->next;
            }
            p=p->next;
            
        }
        
        
        
        return i>=k?pre:NULL;
    
    }
};

class Solution {//倒着插入res，倒数第k个就是res[k-1]
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(!pListHead||k==0)  {return NULL;}
        vector<ListNode*> res;
        ListNode* p=pListHead;
       
        while(p!=NULL){
            res.insert(res.begin(),p);
           
            p=p->next;
            
        }
        
        
        
        return res[k-1];
    
    }
};




class Solution {//统计出个数，倒数第k个，就是正数第cnt-k个，包含头结点
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(!pListHead || k==0) return NULL;
        vector<ListNode*> res;
        ListNode* p=pListHead;
       unsigned int cnt=0;
        while(p!=NULL){
            res.push_back(p);
            cnt++;
            p=p->next;
            
        }
        
        if(cnt<k) return NULL;
        
        return res[cnt-k];
    
    }
};