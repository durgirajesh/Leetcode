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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* ptr=head;
        int cnt=0;
        
        while(ptr!=NULL){
            cnt++;
            ptr=ptr->next;
        }
        
        if(cnt==0){
            return 0;
        }
        
        ListNode* tmp=head;
        ListNode* pr=head;
        int j=0;
        
        while(j<cnt-1){
            
            if(tmp->val==tmp->next->val){
                j++;
                tmp=tmp->next;
            }else{
                pr=pr->next;
                pr->val=tmp->next->val;
                tmp=tmp->next;
                j++;   
            }
        }
        
        pr->next=NULL;
        return head;
        
    }
};
