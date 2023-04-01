class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;
        
        ListNode *tail, *head;
        ListNode *t1 = list1, *t2 = list2;
        
        if (t1->val < t2->val) {
            head = t1;
            t1 = t1->next;
        } else {
            head = t2;
            t2 = t2->next;
        }
        tail = head;

        while (t1 && t2) {
            if (t1->val < t2->val) {
                tail->next = t1;
                t1 = t1->next;
            } else {
                tail->next = t2;
                t2 = t2->next;
            }
            tail = tail->next;
        }

        if (t1) tail->next = t1;
        if (t2) tail->next = t2;

        return head;
    }
};
