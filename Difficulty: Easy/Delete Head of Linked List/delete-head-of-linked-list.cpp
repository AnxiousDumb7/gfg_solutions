/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    Node *deleteHead(Node *head) {
        // code here
        if(head == NULL) return 0;
        
        Node* toDelete = head;
        toDelete->next = head->next;
        head = toDelete->next;
        
        delete toDelete;
        return head;
    }
};
