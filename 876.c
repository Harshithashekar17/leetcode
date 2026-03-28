struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    if(count%2==0){
        count=count/2;
         int n=0;
        while(n<count){
          head=head->next;
          n++;
        }
    return head;
    }
    else{
        count=(count/2)+1;
         int n=1;
        while(n<count){
          head=head->next;
          n++;
        }
    return head;
    }
}