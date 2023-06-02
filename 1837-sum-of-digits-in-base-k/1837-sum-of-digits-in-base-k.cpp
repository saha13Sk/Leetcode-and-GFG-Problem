class Solution {
public:
    int sumBase(int n, int k,int ans=0) {
        
        // concept 
        // n==0 return 0
        // n/k,k,sum + n%k
        //int ans=0;
        if(n==0)
            return ans;
        return sumBase(n/k,k,ans+n%k);
            
            
            
       
        /*
        int sum=0;
        int ans=0;
        
        if(n==k){
            return 1;
        }
        if(n%k==0){
            int d=n/k;
            int var =d;
            while(n!=0){
                ans= ans + var;
                var/=10;
                
            }
            return var;
        }
        int nums = n+20;
        if(n>k){
            while(nums!=0){
            int ld= nums%10;
            sum = sum + ld;
            nums/=10;
            }
        }
        return sum;
        */
    }
};