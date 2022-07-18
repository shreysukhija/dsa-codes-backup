Node* kReverse(Node* head, int k) {
    // Write your code here.
    if(head == NULL)
        return NULL;
    Node* prev= NULL;
    Node* current = head;
    Node* forward = NULL;
    int count = 0;
    
    while(current !=NULL && count < k){
        
        forward = current -> next;
        current -> next = prev;
        prev = current;
        current = forward;
        count++;
        
    }
    
    if(forward != NULL)
        head -> next = kReverse(current, k);
    
    return prev;
       
}