class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return;

        // Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* curr = slow->next;
        slow->next = NULL;

        ListNode* prev = NULL;

        while (curr != NULL) {
            ListNode* forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }

        // Merge
        ListNode* temp = head;

        while (prev != NULL) {
            ListNode* curr = temp->next;

            temp->next = prev;
            prev = prev->next;

            temp->next->next = curr;

            temp = curr;
        }
    }
};