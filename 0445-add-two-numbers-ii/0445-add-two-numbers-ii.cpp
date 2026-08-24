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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        stack <int> s1;
        stack <int> s2;

        while(t1!=NULL){
            s1.push(t1->val);
            t1=t1->next;
        }
        while(t2!=NULL){
            s2.push(t2->val);
            t2=t2->next;
        }

        int sum=0;
        int carr=0;
        stack <int> s3;

        while(!s1.empty() && !s2.empty()){
            sum=s1.top()+s2.top()+carr;
            s1.pop();
            s2.pop();
            if(sum>9) {
                sum-=10;
                carr=1;
            }
            else {
                carr=0;
            }
            s3.push(sum);
        }
        while (!s1.empty()){
            sum=s1.top()+carr;
            s1.pop();
            if(sum>9) {
                sum-=10;
                carr=1;
            }
            else {
                carr=0;
            }
            s3.push(sum);
        }
        while (!s2.empty()){
            sum=s2.top()+carr;
            s2.pop();
            if(sum>9) {
                sum-=10;
                carr=1;
            }
            else {
                carr=0;
            }
            s3.push(sum);
        }
        
        if (carr==1) s3.push(1);

        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        while (!s3.empty()){
            temp->val=s3.top();
            s3.pop();
            if (!s3.empty()) temp->next = new ListNode(0);
            temp=temp->next;
        }
        return head;
    }
};