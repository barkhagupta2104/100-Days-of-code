class Solution {
public:
    void deleteNode(ListNode* node)
     {
        if (node == NULL) return;
        
        if (node->next != NULL) {
            int nextValue = node->next->val;
            node->next = node->next->next;
            node->val = nextValue;
    }}
};
