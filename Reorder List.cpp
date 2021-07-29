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
    void reorderList(ListNode* head) {
        ListNode* tmp=head;        
        int cnt=0;
        while(tmp!=NULL){
            cnt++;
            tmp=tmp->next;
        }
        
        tmp=head;
        ListNode* ptr=head;
        int x=cnt/2,i=1;
        
        while(tmp!=NULL && i<=cnt/2){
            tmp=tmp->next;
            i++;
        }
        ListNode*tp=tmp;
        stack<int> st;
        while(tp->next!=NULL){
            st.push(tp->next->val);
            tp=tp->next;
        }
        while(ptr!=tmp && !st.empty()){
            ListNode* dum=new ListNode(st.top());
            dum->next=ptr->next;
            ptr->next=dum;
            ptr=ptr->next->next;
            st.pop();
        }
        if(cnt%2==0){
            ptr->next->next=NULL;
        }
        else{
            ptr->next=NULL;
        }
    }
};
