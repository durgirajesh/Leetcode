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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        
        if(l1==NULL){
            return l2;
        }else if(l1==NULL && l2==NULL){
            return NULL;
        }else if(l2==NULL){
            return l1;
        }
        
        ListNode* merged;
        ListNode* head;
        
        
        if(l1->val<=l2->val){
            head=l1;
            l1=l1->next;
        }else{
            head=l2;
            l2=l2->next;
        }
        merged=head;
        
        while(l1!=NULL && l2!=NULL){
            
            if(l1->val <= l2->val){
                merged->next=l1;
                l1=l1->next;
            }else{
                merged->next=l2;
                l2=l2->next;
            }
            merged=merged->next;
        }
        
        if(l1){
            merged->next=l1;
        }
        if(l2){
            merged->next=l2;
        }
        
        return head;
        
    }
};
