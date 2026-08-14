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
}; */

class Solution {
  public:
    vector<vector<int>> givenSumPairs(Node* head, int target) {
        // code here
        //vector<pair<int, int>> ans;
        //Node* temp = head;
        // O(n^2)
//        while(temp->next != nullptr){
//            int k = target - temp->data;
//            if(temp->data < k){
//                Node* temp2 = temp->next;
//                while(temp2 != nullptr){
//                    if(temp2->data == k)
//                        ans.push_back({temp->data, temp2->data});
//                    temp2 = temp2->next;
//                }
//            }
//            temp = temp->next;
//        }
//        return ans;

        vector<vector<int>> ans;
        Node* left = head;
        Node* right = head;
        
        while(right->next != nullptr){
            right = right->next;
        }
        // right = tail
        
        while(left->data < right->data){
            if(left->data + right->data == target){
                ans.push_back({left->data, right->data});
                left = left->next;
                right = right->prev;
            }
            else if(left->data + right->data < target){
                left = left->next;
            }
            else{
                right = right->prev;
            }
        }
        return ans;
    }
};