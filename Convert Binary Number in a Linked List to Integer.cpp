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
    int getDecimalValue(ListNode* head) {
        
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
        
        
        int sum=0;
        while(ptr!=NULL){
            
            if(ptr->val==1){
                sum+=pow(2,cnt-1);
                cnt--;
            }
            else{
                cnt--;
            }
            ptr=ptr->next;
        }
        return sum;
    }
};
