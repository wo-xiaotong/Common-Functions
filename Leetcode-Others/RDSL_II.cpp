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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<ListNode*>vv;
        while(head!=NULL){
            vv.push_back(head);
            head=head->next;
        }
        
        set<int>ii;
        for(int i=1;i<vv.size();i++){
            if(vv[i]->val==vv[i-1]->val){
                ii.insert(i-1);
                ii.insert(i);
            }
        }
        
        for(int i:ii){
            delete vv[i];
            vv[i]=NULL;
        }
        
        ListNode*h=NULL;
        for(int i=0;i<vv.size();i++){
            if(vv[i]==NULL)continue;
            if(h==NULL){
                h=vv[i];
                head=h;
            }
            else{
                h->next=vv[i];
                h=vv[i];
            }
        }
        if(h)h->next=NULL;
        return  head;
    }
};
