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
        ListNode* point = new ListNode();
        ListNode* sol = point;
        int digit = 0;
        bool carryover = false;
        digit = l1->val + l2->val;
        if(digit > 9) {
                digit = digit - 10;
                carryover = true;
            }
            else
                carryover = false;
        sol->val = digit;
        bool add1 = false;
        bool add2 = false;
        if(l1 -> next != nullptr) {
            l1 = l1->next;
            add1 = true;
        }
        if(l2 -> next != nullptr) {
            l2 = l2->next;
            add2 = true;
        }
        while(add1 || add2 || carryover) {
            int a = 0;
            int b = 0;
            if(add1)
                a = l1->val;
            if(add2)
                b = l2->val;
            digit = a + b;
            if(carryover)
                digit++;
            if(digit > 9) {
                digit = digit - 10;
                carryover = true;
            }
            else
                carryover = false;
            ListNode* nextDigit = new ListNode(digit);
            sol->next = nextDigit;
            if(l1->next == nullptr)
                add1 = false;
            else
                l1 = l1->next;
            if(l2->next == nullptr)
                add2 = false;
            else
                l2 = l2->next;
            sol = sol->next;
        } 
        return point;
    }
};
