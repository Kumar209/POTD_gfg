class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        int i = 0, j = m-1;
        int a= arr[i], b= brr[j];
        
        int dist= INT_MAX;
        
        while(i<n && j>=0){
            int sum = arr[i]+brr[j];
            int currdist= abs(x-sum);
            
            if(currdist<dist){
                dist = currdist;
                a = arr[i];
                b= brr[j];
            }
            
            if(sum>x){
                j--;
            }
            else{
                i++;
            }
        }
        
        return {a, b};
    }
};