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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* tmp=head;
        int cnt=0;
        while(tmp!=NULL){
            cnt++;;
            tmp=tmp->next;
        }
        
        if(n==cnt){
            head=head->next;
            return head;
        }else{
            ListNode* ptr=head;
            int pos=(cnt-n);
            int k=1;
            while(k<pos){
                ptr=ptr->next;
                k++;
            }
            ptr->next=ptr->next->next;
        }
        
        return head;
    }
};
