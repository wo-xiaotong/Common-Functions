////Given a linked list, determine if it has a cycle in it.
//
///**
//* Definition for singly-linked list.
//* struct ListNode {
//*     int val;
//*     ListNode *next;
//*     ListNode(int x) : val(x), next(NULL) {}
//* };
//*/
//class Solution {
//public:
//	bool hasCycle(ListNode *head) {
//		ListNode* fast = head, *slow = head;
//		while (fast != NULL && slow != NULL) {
//			if (fast->next == NULL)return false;
//			fast = fast->next->next;
//			slow = slow->next;
//			if (fast == slow)return true;
//		}
//
//		return false;
//	}
//};