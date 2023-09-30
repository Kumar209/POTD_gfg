class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        unordered_set<int>col; 
        unordered_set<int>row;
        
        int r=matrix.size();
        int c=matrix[0].size();
  
        for(int i=0 ; i<r ; i++)
        {
            for(int j=0 ; j<c ; j++)
            {
                if(matrix[i][j]==1)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        
        for(int i=0 ; i<r ; i++)
        {
            for(int j=0 ; j<c ; j++)
            {
                if(col.find(j)!=col.end() || row.find(i)!=row.end())
                {
                    matrix[i][j]=1;
                }
            }
        }
    }
};