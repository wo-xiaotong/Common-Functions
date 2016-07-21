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
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		int lenA = getLength(l1);
//		int lenB = getLength(l2);
//
//		ListNode *head, *p;
//		if (lenA >= lenB)head = l1;
//		else head = l2;
//
//		p = head;
//		int minLen = min(lenA, lenB);
//		int carry = 0;
//		for (int i = 0; i<minLen; i++){
//			p->val = l1->val + l2->val + carry;
//			if (p->val >= 10){
//				carry = 1;
//				p->val = p->val - 10;
//			}
//			else
//				carry = 0;
//			if (p->next != NULL)p = p->next;
//			l1 = l1->next;
//			l2 = l2->next;
//		}
//
//		if (carry == 1){
//			int maxLen = max(lenA, lenB);
//			for (int i = minLen; i<maxLen; i++){
//				p->val = p->val + carry;
//				if (p->val >= 10){
//					carry = 1;
//					p->val = p->val - 10;
//				}
//				else{
//					carry = 0;
//					break;
//				}
//
//				if (p->next != NULL)p = p->next;
//			}
//		}
//
//		if (carry == 1)p->next = new ListNode(1);
//
//		return head;
//
//	}
//
//	int getLength(ListNode *l){
//		int length = 0;
//		while (l){
//			++length;
//			l = l->next;
//		}
//
//		return length;
//	}
//};