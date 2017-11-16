

// https://www.hackerrank.com/challenges/ctci-linked-list-cycle/problem


/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    
    if(!head)
        return 0;
    
    Node *slwptr = head, *fstptr = head;
    
    while(slwptr && fstptr && fstptr->next)
    {
        slwptr = slwptr->next;
        fstptr = fstptr->next->next;
        
        if(slwptr == fstptr)
            return 1;
    }
    return 0;
}



