///**
//* Definition for singly-linked list.
//* struct ListNode {
//*     int val;
//*     ListNode *next;
//*     ListNode(int x) : val(x), next(NULL) {}
//* };
//*/
//
////��ͷ�ڵ����õ�����
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {
//		if (head == NULL || head->next == NULL)return head;
//		ListNode *tmp = head->next, *q = head->next;
//		head->next = NULL;    //��һ���ڵ���ΪNULL �������������ѭ��
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