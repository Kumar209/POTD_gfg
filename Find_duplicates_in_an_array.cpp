class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        map<int, int> mp;
        vector<int> res;
        
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        for(auto i : mp){
            if(i.second>1){
                res.push_back(i.first);
            }
        }
        
        if(res.size()== 0){
            return {-1};
        }
        
        return res;
    }
};