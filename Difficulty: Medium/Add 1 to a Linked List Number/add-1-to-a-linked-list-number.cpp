/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
        // using recursion, backtracking
  int helper(Node* temp){
            // base case of recursion
            if(temp == nullptr){
                return 1;
            }
            int carry = helper(temp->next);
            temp->data += carry;
            if(temp->data <= 9)
                return 0;
            else{
                temp->data = 0;
                return 1;
            }
        }
    Node* addOne(Node* head) {
    
        int carry = helper(head);
        
        if(carry == 1){
            Node* newnode = new Node(1);
            newnode->next = head;    
            head = newnode;
        }
        
        return head;
    }
};