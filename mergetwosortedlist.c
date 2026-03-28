struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
     struct ListNode res;
     res.next=NULL;
     struct ListNode*head=&res;
     while(list1!=NULL && list2!=NULL){
        if((list1->val)<(list2->val)){
            head->next=list1;
            list1=list1->next;
        }
        else{
            head->next=list2;
            list2=list2->next;
        }
        head=head->next;
     }
     while(list1!=NULL){
        head->next=list1;
        list1=list1->next;
        head=head->next;
     }
     while(list2!=NULL){
        head->next=list2;
        list2=list2->next;
        head=head->next;
     }
     return res.next;

}