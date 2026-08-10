/* Node is defined as
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
    Node* segregate(Node* head) {
        // code here
        Node* temp = head;
        vector<int> v;
        
        while(temp != nullptr){
            v.push_back(temp->data);
            temp = temp->next;
        }
        sort(v.begin(), v.end());
        int i = 0;
        Node* ptr = head;
        
        while(i < v.size()){
            ptr->data = v[i];
            ptr = ptr->next;
            i++;
        }
        return head;
    }
};