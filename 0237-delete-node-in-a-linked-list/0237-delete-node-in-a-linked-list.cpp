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
    void deleteNode(ListNode* node) {
        ListNode* temp=node;
        ListNode* ne=node->next;
        while (ne->next!=NULL){
            temp->val=ne->val;
            temp=ne;
            ne=ne->next;
        }
        temp->val=ne->val;
        temp->next=NULL;
        delete ne;
    }
};