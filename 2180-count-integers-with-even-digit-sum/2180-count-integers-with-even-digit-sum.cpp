class Solution {
public:
    int countEven(int num) {
        
       long long int cnt =0; 
        for(int i=1;i<=num;i++){
            long long j=i,ans=0;
            while(j>0){
                ans +=j%10;
                j = j/10;
            }
            if(ans%2==0){
                cnt++;
            }   
        
    }
        return cnt;
    }
    
};