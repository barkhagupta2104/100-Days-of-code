class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head)
     {
        if (head==NULL)
        return NULL;
          ListNode* curr = head;
          while(curr != NULL)
          {
              if((curr->next!=NULL)&& 
              (curr->val==curr->next->val))
              {
                ListNode*    nxt_nxt=curr->next->next;
                 ListNode* node_to_ddlt=curr->next;
                 delete(node_to_ddlt);
                  curr->next=nxt_nxt;
              }
              else
              {
                  curr=curr->next;
              }

          }
          return head;
    }
}
