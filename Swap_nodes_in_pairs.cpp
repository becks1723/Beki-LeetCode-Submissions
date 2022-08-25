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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* start = head->next;
        ListNode* A = head;
        ListNode* B = head->next;
        ListNode* C = NULL;
        bool cont = true;
        while(cont) {
            //cout << A->val << " " << B->val << "\n";
            A->next = B->next;
            B->next = A;
            if(C)
                C->next = B;
            if(!(A->next) || !(A->next->next)) 
                //cout << B->next->val << "\n";
                cont = false;
            else {
                C = A;
                A = A->next;
                B = A->next;
            }

        }
        return start;
    }
};
