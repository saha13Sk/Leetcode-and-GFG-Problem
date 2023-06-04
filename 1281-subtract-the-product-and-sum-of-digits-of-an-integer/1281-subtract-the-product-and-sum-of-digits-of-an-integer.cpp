class Solution {
public:
    int subtractProductAndSum(int n) {
        
        long long int num=n;
        long long int prd=1;
        long long int sum=0;
        
        while(num>0){
            
            long long int d = num%10;
            prd = prd *d;
            sum = sum + d;
            num/=10;
            
        }
    
        return prd-sum;
        
    }
};