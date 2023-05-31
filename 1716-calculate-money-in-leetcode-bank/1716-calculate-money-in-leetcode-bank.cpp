class Solution {
public:
    int totalMoney(int n) {
        
        int ans=0;
         // total 7 day
        for(int i=0;i<n;i++){
            ans+= i/7 + 1 + i%7 ;
        }
        return ans;
        
    }
};