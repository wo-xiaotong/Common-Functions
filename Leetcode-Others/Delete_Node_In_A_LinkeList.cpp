//delete a node in linkelist only give the node you want to delete
//把要删除的节点的后一个节点值赋值到本节点，然后把后一节点删除

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