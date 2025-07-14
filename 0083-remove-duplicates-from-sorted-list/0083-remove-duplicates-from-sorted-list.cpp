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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL)
        return head;

        ListNode* pre = head;
        ListNode* curr = head->next;
        while (curr != NULL) {
            if (curr->val == pre->val) {
                curr = curr->next;
                continue;
            }
            pre->next = curr;
            pre = curr;
            curr = curr->next;
        }
        pre->next = NULL;
        return head;
    }
};