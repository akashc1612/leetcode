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
        if(head->next==NULL)return head->next;
        vector<ListNode*> v;
        while(head){
            v.push_back(head);
            head=head->next;
        }
        const int n=v.size();
        if(n==2){
            v[0]->next=NULL;
            return v[0];
        }
        v[(n/2)-1]->next = v[n/2]->next;
        return v[0];
        
    }
};