///**
//* Definition for singly-linked list.
//* struct ListNode {
//*     int val;
//*     ListNode *next;
//*     ListNode(int x) : val(x), next(NULL) {}
//* };
//*/
//
////无头节点逆置单链表
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {
//		if (head == NULL || head->next == NULL)return head;
//		ListNode *tmp = head->next, *q = head->next;
//		head->next = NULL;    //第一个节点置为NULL 避免后续操作死循环
//		while (q != NULL) {
//			q = tmp->next;
//			tmp->next = head;
//			head = tmp;
//			tmp = q;
//		}
//
//		return head;
//	}
//};