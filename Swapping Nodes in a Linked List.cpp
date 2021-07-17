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
    ListNode* swapNodes(ListNode* head, int k) {
        
        if(!head){
            return NULL;
        }
        
        int cnt=0; 
        ListNode* ptr=head;
        
        while(ptr!=NULL){
            cnt++;
            ptr=ptr->next;
        }
        ptr=head;
        
        int backpos=(cnt-k)+1;
        int i=2;
        ListNode* pr=head;
        
        if(k>cnt){
            return NULL;
        }
        
        if(cnt==k){
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            swap(pr->val,ptr->val);
            return head;
        }
        
        int j=0, q=0;
        if(k > backpos){
            j=k;
            q=backpos;
        }else{
            j=backpos;
            q=k;
        }
        
        while(i<=j && ptr!=NULL){
            ptr=ptr->next;
            if(i==q){
                pr=ptr;
            }
            i++;
        }
        swap(pr->val,ptr->val);
        return head;
        
    }
};
