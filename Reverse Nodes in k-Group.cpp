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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        int ct=0;
        ListNode* ptr=head;
        
        while(ptr!=NULL){
            ct++;
            ptr=ptr->next;
        }
        
        if(!head || ct < k){
            return head;
        }
        
        int cnt=0;
        ListNode* prev=NULL, *Next=NULL; 
        ListNode* cur=head;
        
        while(cur!=NULL && cnt<k){
            
            Next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=Next;
            
            cnt++;
        }
        
        if(Next){
            head->next=reverseKGroup(Next,k);
        }
        
        return prev;
        
    }
};
