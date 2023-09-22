class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
        
       long long leftsum = 0;
       long long rightsum =0; 
       
       for(int i=0; i<n; i++){
           rightsum = rightsum + a[i];
       }
       
       for(int i=0; i<n; i++){
           rightsum = rightsum -a[i];
           
           if(rightsum == leftsum){
               return i+1;
           }
           
           leftsum = leftsum + a[i];
       }
       
       return -1;
    }

};