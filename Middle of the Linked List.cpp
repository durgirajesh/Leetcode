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
    ListNode* middleNode(ListNode* head) {
        
        if(!head){
            return NULL;
        }
        
        ListNode* ptr=head;
        int cnt=0;
        while(ptr!=NULL){
            cnt++;
            ptr=ptr->next;
        }
        ptr=head;
        
        int i=0;
        while(i<(cnt/2)){
            ptr=ptr->next;
            i++;
        }
        
        return ptr;
    }
};
