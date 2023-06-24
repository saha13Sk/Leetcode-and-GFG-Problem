class Solution {
public:
    int binaryGap(int n) {
        
        int cnt =INT_MIN;
        int ans=0;
        
        while(n >0){
            
            if(n&1){
                ans = max(cnt,ans);
                cnt =0;
            }
            cnt++;
            n= n>>1;
        }
        
        return ans;
        
        
        
        
        
        
        
        
    }
};