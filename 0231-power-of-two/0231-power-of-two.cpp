class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        
        long long int N = n;
        
        if(N<=0)
            return false;
        else if((N &(N-1))==0)
            return true;
        else
            return false;
        
        
        
        
        
        
        
        
        
    }
};