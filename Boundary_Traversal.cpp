class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int> ans;

        if(n==1 && m==1)
            return {matrix[0][0]};
            
        if(n==1)
        {
            for(int i=0; i<m; i++)
            ans.push_back(matrix[0][i]);
            return ans;
        }
        
        if(m==1)
        {
            for(int i=0; i<n; i++)
            ans.push_back(matrix[i][0]);
            return ans;
        }
        
        for(int i = 0; i<m; i++)           // inserting top most row
        {
            ans.push_back(matrix[0][i]);
        }
        
        for(int i = 1; i<n; i++)           // inserting right most row
        {
            ans.push_back(matrix[i][m-1]);
        }
        
        for(int i = m-2; i>=0; i--)           // inserting bottom most row
        {
            ans.push_back(matrix[n-1][i]);
        }
        
        for(int i = n-2;i>0; i--)           // inserting left most row
        {
            ans.push_back(matrix[i][0]);
        }
        
        return ans;
    }
};