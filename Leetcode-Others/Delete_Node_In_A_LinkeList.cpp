//delete a node in linkelist only give the node you want to delete
//��Ҫɾ���Ľڵ�ĺ�һ���ڵ�ֵ��ֵ�����ڵ㣬Ȼ��Ѻ�һ�ڵ�ɾ��

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	void deleteNode(ListNode* node) {
		ListNode *p = node->next;
		node->val = node->next->val;
		node->next = node->next->next;
		delete p;
	}
};