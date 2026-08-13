/* a Node of the doubly linked list
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};
*/

class Solution {
  public:

    // Function to delete a specified node from the linked list
    Node* deleteAllOccurOfX(Node* head, int x) {
        Node* temp = head;
        
        while(temp != nullptr){
            
            if(temp->data == x ){
               
                Node* ptr = temp->next;
                    
                if(temp == head){
                    head = temp->next;
                    if(head != nullptr){
                        head->prev = nullptr;
                    }
                }
                
                else {
                
                    temp->prev->next= temp->next;
                    if(temp->next != nullptr)
                        temp->next->prev = temp->prev;
                }
                delete temp;
                temp = ptr;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};