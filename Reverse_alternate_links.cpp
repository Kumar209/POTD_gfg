/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
    //Reverse Function
    struct Node*rev(struct Node* root){
        struct Node *prev=NULL;
        struct Node *curr=root;
        while(curr){
            struct Node *forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        
        return prev;
    }

    void rearrange(struct Node *odd)
    {
        //add code here
        if(!odd || !odd->next){
            return;
        }
        
        struct Node* even = odd->next;
        struct Node* even_head = even;
        
        while(odd->next && even->next){
            struct Node *en = even->next->next;
            struct Node *on = odd->next->next;
            odd->next = on;
            even->next = en;
            odd = odd->next;
            even = even->next;
        }
        
        even_head = rev(even_head);
        odd->next = even_head;
    }
};