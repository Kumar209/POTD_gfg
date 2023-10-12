class Solution{

public:
    void getflower(Node* root, int x, int &f){
        if(root == NULL){
            return ;
        }
        
        getflower(root->left, x, f);
        if(root->data<=x){
            f = root->data;
        }
        getflower(root->right, x, f);
    }
    
    int floor(Node* root, int x) {
        int f = INT_MIN;
        
        getflower(root, x, f);
        
        if(f == INT_MIN){
            return -1;
        }
        
        return f;
    }
}