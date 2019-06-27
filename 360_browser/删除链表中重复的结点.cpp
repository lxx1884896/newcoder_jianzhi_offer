/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {//讲道理，没有看太懂。。。。。。。。。。。。。。。。。
public:        //1->2->3->4->5,pHead 指向的是val为1的结点
    ListNode* deleteDuplication(ListNode* pHead)
    {   if (pHead == NULL) {
			return NULL;
		}
		ListNode* preNode = NULL;
		ListNode* node = pHead;
		while (node != NULL) {
			if (node->next != NULL && node->val == node->next->val) {
				int value = node->val;
				while (node->next != NULL && node->next->val == value) {
					node = node->next;
				}
				if (preNode == NULL) {
					pHead = node->next;
				} else {
					preNode->next = node->next;
				}
			} else {
				preNode = node;
			}
            node = node->next;
		}
		return pHead;
        

    }
};