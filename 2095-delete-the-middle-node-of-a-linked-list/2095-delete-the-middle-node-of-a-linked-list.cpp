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
    ListNode* deleteMiddle(ListNode* head) {
        if (head->next==NULL) return NULL;
        int cnt=0;
        ListNode* temp=head;
        while (temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int id=cnt/2+1;
        ListNode* prev=NULL;
        temp=head;
        cnt=1;
        while (cnt!=id){
            prev=temp;
            temp=temp->next;
            cnt++;
        }
        prev->next=temp->next;
        return head;
    }
};