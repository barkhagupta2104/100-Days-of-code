class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) 
    {
        ListNode *temp=head,*nextHead;
        int count=0;

        while(temp!=NULL)
        {
            count++;
            temp=temp->next;

        }
        if(head==NULL || head->next==NULL || k%count==0)
            return head;
        temp=head;
        k=(k)%count;
        for(int i=1;i<(count-k);i++)
        {
            temp=temp->next;
        } 
        nextHead=temp->next;
        temp->next=NULL;
        temp=nextHead;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=head;
        return nextHead;   
    }
};
