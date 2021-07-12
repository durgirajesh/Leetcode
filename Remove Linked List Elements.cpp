/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL){
            return NULL;
        }
        ListNode* pr=head;
        ListNode* ptr=head;
        
        while(pr!=NULL && pr->val==val)
            pr=pr->next;
        
        if(pr==NULL){
            return NULL;
        }
        
        head=pr;
        
        while(pr->next!=NULL){
            
            if(pr->next->val==val){
                pr->next=pr->next->next;
                continue;
            }
            
            pr=pr->next;
        }
        return head;
    }
};
