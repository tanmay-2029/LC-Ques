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
        int cnt=1;
        ListNode* temp = head;
        stack <int> s;
        vector <int> v;
        while (temp!=NULL){
            v.emplace_back(temp->val);
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int i=0;
        int n = v.size();
        while (i<=n-1-i){
            if (i==n-1-i) temp->val=v[i];
            else{
                temp->val=v[i];
                temp=temp->next;
                temp->val=v[n-1-i];
            }
            temp=temp->next;
            i++;
        }
    }
};