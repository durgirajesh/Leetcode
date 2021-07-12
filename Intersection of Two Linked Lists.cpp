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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* ptr=headA;
        ListNode* tmp=headB;
        
        if(!ptr || !tmp){
            return NULL;
        }
        
        while(ptr!=tmp){
            ptr=ptr->next;
            tmp=tmp->next;
            
            if(ptr==tmp)
                break;
            
            if(!ptr)
                ptr=headB;
            if(!tmp)
                tmp=headA;
                
        }
        return ptr;
    }
};
