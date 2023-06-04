class Solution {
public:
    int distinctIntegers(int n) {
        int ans;
        if(n==1){
            return n;
        }
        for(int i=2;i<n;i++){
            if(n%i ==1){
                ans = i;
            }
        }
        return ans;
    }
};