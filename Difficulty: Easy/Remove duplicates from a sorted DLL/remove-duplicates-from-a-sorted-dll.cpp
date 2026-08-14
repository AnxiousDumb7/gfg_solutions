/* Structure of a link list node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* headRef) {
        // code here
        Node* temp = headRef;
        
        if(temp == nullptr || temp->next == nullptr){
            return temp;
        }
        while(temp != nullptr && temp->next != nullptr){
        
            
            if(temp->data == temp->next->data){
                Node* del = temp->next;        
                temp->next = del->next; // agar null hai to assign ho jayega
                if(del->next != nullptr)
                    del->next->prev = temp;
                delete del;
            }
            else{
                temp = temp->next;
            }
        }
        return headRef;
    }
};