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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return head;
        while(head->val == val && head){
            head=head->next;
            if(head==NULL)return head;
        }
        ListNode* temp=head;
        ListNode* temp1=head;
        while(temp){
            if(temp->val == val){
                temp1->next = temp->next;
                temp = temp->next;
            }
            else{temp1 = temp;
            temp=temp->next;}
        }
        return head;
    }
};