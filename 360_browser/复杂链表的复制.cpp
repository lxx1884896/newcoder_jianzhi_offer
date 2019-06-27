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
  
            map<RandomListNode*,RandomListNode*> m;
        RandomListNode* pHead1 = pHead;
        RandomListNode* pHead2 = new RandomListNode(pHead1->label);
        RandomListNode* newHead = pHead2;
        m[pHead1] = pHead2;
        while(pHead1){
            if(pHead1->next) pHead2->next = new RandomListNode(pHead1->next->label);
            else pHead2->next = NULL;    
            pHead1 = pHead1->next;
            pHead2 = pHead2->next;
            m[pHead1] = pHead2;
        }
  
        pHead1 = pHead;
        pHead2 = newHead;
        while(pHead1){
            pHead2->random = m[pHead1->random];
            pHead1 = pHead1->next;
            pHead2 = pHead2->next;
        }
        return newHead;
        
    }
};



//if(pHead==NULL)
 //            return NULL;
          
 //        //定义一个哈希表
 //        unordered_multimap<RandomListNode*,RandomListNode*> table;
          
 //        // 开辟一个头结点
 //        RandomListNode* pClonedHead=new RandomListNode(pHead->label);
 //        pClonedHead->next=NULL;
 //        pClonedHead->random=NULL;
          
 //        // 将头结点放入map中
 //        table.insert(make_pair(pHead,pClonedHead));
          
 //        //设置操作指针
 //        RandomListNode* pNode=pHead->next;
 //        RandomListNode* pClonedNode=pClonedHead;
          
 //        // 第一遍先将简单链表复制一下
 //        while(pNode!=NULL)
 //        {
 //            // 不断开辟pNode的拷贝结点
 //            RandomListNode* pClonedTail=new RandomListNode(pNode->label);
 //            pClonedTail->next=NULL;
 //            pClonedTail->random=NULL;
              
 //            //连接新节点，更新当前节点
 //            pClonedNode->next=pClonedTail;
 //            pClonedNode=pClonedTail;
              
 //            //将对应关系  插入到哈希表中
 //            table.insert(make_pair(pNode,pClonedTail));
              
 //            //向后移动操作节点
 //            pNode=pNode->next;
 //        }
          
 //        //需从头开始设置random节点，设置操作指针
 //        pNode=pHead;
 //        pClonedNode=pClonedHead;
          
 //        // 根据map中保存的数据，找到对应的节点
 //        while(pNode!=NULL)
 //        {
              
 //            if(pNode->random!=NULL)
 //            {
 //                //找到对应节点，更新复制链表
 //                pClonedNode->random=table.find(pNode->random)->second;
 //            }
              
 //            //向后移动操作节点
 //            pNode=pNode->next;
 //            pClonedNode=pClonedNode->next;
 //        }
          
 //        return pClonedHead;