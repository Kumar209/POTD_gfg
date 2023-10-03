class Solution {
  public:
    int romanToDecimal(string &str) {
        int ans = 0;
        
        unordered_map<char, int> ump;
        ump['I'] =1;
        ump['V'] =5;
        ump['X'] =10;
        ump['L'] =50;
        ump['C'] =100;
        ump['D'] =500;
        ump['M'] =1000;
        
        int max =ump[str[str.length()-1]];
        
        for(int i =str.length()-1;i>=0; i--){
            int num =ump[str[i]];
            if(num>=max){
                ans = num+ans;
                max = num;
            }
            else 
                ans -= num;
        }
        
        return ans;
    }
};