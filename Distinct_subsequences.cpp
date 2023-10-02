class Solution {
public:
    int distinctSubsequences(string s) {
         int MOD = 1000000007;
        int n = s.length();

        vector<int> dp(n + 1);

        dp[0] = 1;

        vector<int> lastOccurrence(26, -1);

        for (int i = 1; i <= n; i++) {
            dp[i] = (2 * dp[i - 1]) % MOD;

            if (lastOccurrence[s[i - 1] - 'a'] != -1) {
                dp[i] = (dp[i] - dp[lastOccurrence[s[i - 1] - 'a']] + MOD) % MOD;
            }

            lastOccurrence[s[i - 1] - 'a'] = i - 1;
        }

        return dp[n];
    }
};