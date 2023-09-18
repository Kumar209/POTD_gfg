class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        if(!n){
            return false;
        }
        
        while(n%2 == 0){
            n=n/2;
        }
        
        if( n == 1 ){
            return true;
        }
        else{
            return false;
        }
        
    }
};