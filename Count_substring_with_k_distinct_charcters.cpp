class Solution
{
  public:
    long long int solve(string s, int k){
        int n = s.length();
        
        vector<int> charCount(26, 0);
        
        int j = 0;
        long long int count = 0;
        int distinctCount = 0;

        for (int i = 0; i < n; i++) {
            if (charCount[s[i] - 'a'] == 0) {
                distinctCount++;
            }
            charCount[s[i] - 'a']++;

            while (distinctCount > k) {
                charCount[s[j] - 'a']--;
                if (charCount[s[j] - 'a'] == 0) {
                    distinctCount--;
                }
                j++;
            }

            count += i - j + 1;
        }

        return count;
    }
    
    long long int substrCount (string s, int k) {
    	return solve(s, k) - solve(s, k-1);
    }
};