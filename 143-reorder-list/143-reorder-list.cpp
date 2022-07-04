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
        vector<ListNode*> v;
        if(head->next==NULL)return;
        while(head){
            v.push_back(head);
            head=head->next;
        }
        const int n=v.size();
        for(int i=0,j=n-1;i<j;i++,j--){
            if(i==(j-1)&&n%2==0){
                v[i]->next = v[j];
                v[j]->next = NULL;
                break;
            }
            v[i]->next = v[j];
            v[j]->next = v[i+1];
        }
        if(n%2!=0){
            v[n/2]->next = NULL;
            }
        head=v[0];
    }
};