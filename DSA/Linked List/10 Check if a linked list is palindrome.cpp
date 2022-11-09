void findMiddle(Node *head, Node **middle){
    Node *fast = head, *slow = head;
    fast = fast -> next;
    while(fast != NULL and fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    *middle = slow;
}

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

bool isPalindrome(Node *head)
{
    if(head -> next == NULL) return true;
    Node *middle;
    findMiddle(head, &middle);
    // Node *i = 
    middle ->next = reverseList(middle->next);
    Node*temp = head;
    findMiddle(head, &middle);
    middle = middle->next;
    while(middle != NULL){
        if(middle ->data != temp->data) return false;
        middle = middle -> next;
        temp = temp -> next;
    }
    return true;
}