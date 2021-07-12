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
    bool isPalindrome(ListNode* head) {
        
        if(!head)
            return 0;
        
        ListNode* ptr=head;
        int cnt=0;
        
        while(ptr!=NULL){
            cnt++;
            ptr=ptr->next;
        }
        
        if(cnt==1){
            return 1;
        }
        
        ptr=head;
        stack<int> st;
        int mid=(cnt-1)/2, i=0;
        
        while(i<=mid){
            st.push(ptr->val);
            ptr=ptr->next;
            i++;
        }
        head=ptr;
        
        if(cnt%2!=0){
            st.pop();
        }
        
        while(!st.empty() && ptr!=NULL){
            int x=st.top();
            if(x==ptr->val){
                st.pop();
            }
            ptr=ptr->next;
        }
        
        return (st.empty());
    }
};
