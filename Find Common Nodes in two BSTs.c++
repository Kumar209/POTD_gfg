class Solution
{
    public:
    void inorder(Node* root, vector<int> &v){
        if(root == NULL){
            return;
        }
        
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
    //Function to find the nodes that are common in both BST. 
    vector <int> findCommon(Node *root1, Node *root2)
    {
     vector<int> v1;
     vector<int> v2;
     vector<int> ans;
     
     inorder(root1, v1);
     inorder(root2, v2);
     
     set<int> st;
     
     for(int i=0; i<v1.size(); i++){
         st.insert(v1[i]);
     }
     
     for(int i=0; i<v2.size(); i++){
         if(st.find(v2[i])!= st.end()){
             ans.push_back(v2[i]);
         }
     }
     
     
     return ans;
     
    }
};