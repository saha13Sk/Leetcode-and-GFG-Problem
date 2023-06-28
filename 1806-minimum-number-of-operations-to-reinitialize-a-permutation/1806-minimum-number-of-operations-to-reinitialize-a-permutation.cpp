class Solution {
public:
    int reinitializePermutation(int n) {
        
        int cnt =1;
        int pos = n/2;
        
        while(pos!=1){
            cnt++;
            if(pos%2 ==0) pos= pos/2;
            else pos = n/2 + (pos - 1)/2;            
        }
        return cnt;
        
        
    }
};