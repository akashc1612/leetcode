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
    vector<int> v;
    bool isPalindrome(ListNode* head) {
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        const int n=v.size();
        for(int i=0,j=n-1;i<j;i++,j--){
            if(v[i]!=v[j])return false;
        }
        return true;
    }
};