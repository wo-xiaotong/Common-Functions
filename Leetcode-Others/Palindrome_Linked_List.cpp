////Given a singly linked list, determine if it is a palindrome.
////Follow up :
////Could you do it in O(n) time and O(1) space ?
//
////µÝ¹é½â·¨
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
//	bool isPalindrome(ListNode* head) {
//		if (head == NULL || head->next == NULL)return true;
//		lst = head;     
//		return judge(head);
//	}
//
//	bool judge(ListNode *head) {
//		if (head == NULL)return true;
//		if (judge(head->next) == false)return false;
//		if (lst->val != head->val)return false;
//		else {
//			lst = lst->next;
//			return true;
//		}
//	}
//private:
//	ListNode * lst;
//
//};