/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        Node* newNode = new Node(data);
        if(data<head->data){
            newNode->next = head;
            return newNode;
        }
        
       Node* curr = head;
        
        while(curr->next!= NULL){
            if(curr->next->data>data){
                newNode->next = curr->next;
                curr->next = newNode;
                return head;
            }
            else{
                curr= curr->next;
            }
        }
        
        curr->next = newNode;
        return head;
    }
};