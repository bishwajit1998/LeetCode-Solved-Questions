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
        ListNode * res=new ListNode(-1);
        res->next=head;
        ListNode * prv=res;
        ListNode * A=head;
        while(A)
        {
            int c=0;
            ListNode * start=A;
            ListNode * x=A;
            ListNode * y=NULL;
            while(A && c<k)
            {
                A=A->next;
                c+=1;
            }
            if(c!=k)
            {
                prv->next=start;
                break;
            }
            while(x!=A)
            {
                ListNode * nxt=x->next;
                x->next=y;
                y=x;
                x=nxt;
            }
            prv->next=y;
            prv=start;
        }
        return res->next;
    }
};