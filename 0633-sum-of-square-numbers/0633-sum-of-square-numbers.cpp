class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int n=c; 
        int res=0;        
        for(long long int i=0;i*i<=n;i++){
            double b = sqrt(c- i*i);
            if(b==(int) b)
                return true;
           // res = (i*i) + (b*b); 
        }
 
            return false;
 
        
    }
};