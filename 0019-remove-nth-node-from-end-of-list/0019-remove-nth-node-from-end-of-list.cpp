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
        ListNode* temp=head;
        int cnt=0;
        while(temp){
            temp=temp->next;
            cnt++;
        }
        if(cnt==1) return NULL;
        int nth=cnt-n;
        int s=1;
        if(nth==0){
            head=head->next;
            return head;
        }
        temp=head;
        while(s!=nth) {
            temp=temp->next;
            s++;
        }    
        temp->next=temp->next->next;
        return head;
    }
};