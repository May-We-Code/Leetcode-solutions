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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *ans = new ListNode(),*temp = ans;
        while(l1 && l2){
            carry += l1->val + l2->val;
            temp->next = new ListNode(carry%10);
            carry /= 10;
            l1 = l1->next;
            l2 = l2->next;
            temp = temp->next;
        }
        while(l1){
            carry += l1->val;
            temp->next = new ListNode(carry%10);
            carry /= 10;
            l1 = l1->next;
            temp = temp->next;
        }
        while(l2){
            carry += l2->val;
            temp->next = new ListNode(carry%10);
            carry /= 10;
            l2 = l2->next;
            temp = temp->next;
        }
        while(carry > 0){
            temp->next = new ListNode(carry%10);
            carry /= 10;
            temp = temp->next;
        }
        return ans->next;
    }
};
