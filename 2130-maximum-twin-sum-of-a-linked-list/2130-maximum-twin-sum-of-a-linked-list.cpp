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
    int pairSum(ListNode* head) {
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        const int n=v.size();
        vector<int> v1;
        for(int i=0,j=n-1;i<j;i++,j--){
            v1.push_back(v[i]+v[j]);
        }
        int max1=0;
        for(int it:v1){
            max1 = max(max1,it);
        }
        return max1;
    }
};