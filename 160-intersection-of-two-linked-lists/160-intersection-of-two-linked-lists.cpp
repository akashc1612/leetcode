/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> m;
        while(headA){
            if(m.find(headA)==m.end())m[headA]=1;
            headA=headA->next;
        }
        while(headB){
            if(m.find(headB)!=m.end()){
                return headB;
            }
            headB=headB->next;
        }
        return NULL;
    }
};