/* Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        Node* slow = head;
        Node* fast = head;
        
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            
            if(fast == slow){
                // loop detected
                return lengthLoop(slow, fast);
            }
        }
        return 0;
        
    }
    int lengthLoop(Node* &slow, Node* &fast){
            int count = 1;
            slow = slow->next;
            while(fast != slow){
                count++;
                slow = slow->next;
            }
            return count;
        }
};