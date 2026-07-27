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
        int count=0;
        ListNode *temp=head;
        while (temp) {
            count++;
            temp=temp->next;
        }
        int a=count-n;
        if (a==0) {
            head=head->next;
            return head;
        }
        int b=1;
        ListNode* temp1=head;
        while (b!=a) {
            b++;
            temp1=temp1->next;
        }
        ListNode *temp2=temp1->next;
        temp1->next=temp1->next->next;
        temp2=NULL;
        return head;
    }
};
