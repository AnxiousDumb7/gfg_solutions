/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        // temp = tail
        Node* tail = temp;
        while(temp != nullptr){
            
            swap(temp->next, temp->prev);
            temp = temp->next;
        }
        
        return tail;
    }
};