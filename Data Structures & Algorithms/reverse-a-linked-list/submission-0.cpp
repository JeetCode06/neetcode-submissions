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
        ListNode* temp1=head;
        ListNode* temp=NULL;
        while (temp1) {
            ListNode* nextnode = temp1->next;
            temp1->next=temp;
            temp=temp1;
            temp1=nextnode;
        }
        return temp;
    }
};
