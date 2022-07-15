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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)return head;
        if(head->next == NULL)return head;
        ListNode* temp=head;
        ListNode* temp1=NULL;
        while(temp){
            ListNode* x = temp->next;
            temp->next = temp1;
            temp1 = temp;
            temp = x;
        }
        return temp1;
    }
};