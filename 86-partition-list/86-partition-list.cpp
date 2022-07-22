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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL)return NULL;
        if(head->next==NULL)return head;
        vector<ListNode*> l;
        vector<ListNode*> r;
        while(head){
            if(head->val<x)l.push_back(head);
            else{r.push_back(head);}
            head=head->next;
        }
        if(l.size()==0)return r[0];
        for(auto i=0;i<l.size()-1;i++){
            l[i]->next = l[i+1];
        }
        if(r.size()==0 && l.size()>0){l[l.size()-1]->next=NULL;return l[0];}
        if(l.size()>0){l[l.size()-1]->next=r[0];}
        for(auto i=0;i<r.size()-1;i++){
            r[i]->next = r[i+1];
        }
        r[r.size()-1]->next = NULL;
        return l[0];
    }
};