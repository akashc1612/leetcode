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
        vector<ListNode*> v;
        if(head->next==NULL)return NULL;
        while(head){
            v.push_back(head);
            head=head->next;
        }
        const int s=v.size();
        if(s==n){
            return v[1];
        }
        if(n==1){
            v[s-2]->next=NULL;
            return v[0];
        }
        v[s-n-1]->next=v[s-n+1];
        return v[0];
    }
};