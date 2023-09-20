class Solution
{
    public:
    int solve(int arr[], int n, vector<int> &dp){
        if(n<0){
            return 0;
        }
        
        if(n == 0){
            return arr[0];
        }
        
        if(dp[n]!=-1){
            return dp[n];
        }
        
        int incl = solve(arr, n-2, dp) + arr[n];
        int excl = solve(arr, n-1, dp) + 0;
        
        dp[n] = max(incl, excl);
        
        return dp[n];
    }
    
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        vector<int>dp(n+1, -1);
        int ans = solve(arr, n-1, dp);
        return ans;
    }
};