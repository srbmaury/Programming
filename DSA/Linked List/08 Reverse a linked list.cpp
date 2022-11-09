Node* reverseList(Node* head) {
    if(head == NULL or (*head).next == NULL) return head;
    
    Node* temp = head;
    Node* temp2 = (*temp).next;
    (*temp).next = NULL;
    while((*temp2).next != NULL){
        Node* temp3 = (*temp2).next;
        (*temp2).next = temp;
        temp = temp2;
        temp2 = temp3;
    }
    (*temp2).next = temp;
    return temp2;
}