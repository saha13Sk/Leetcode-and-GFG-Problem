class Solution {
public:
    int smallestRepunitDivByK(int k) {
       
        // previous remander must zero
        // prev_rem = (prev_rem * 10 + 1) %k
        // prev_rem == 0, return i
        // k%2 !=0 and k%5 !=0
        
        if(k%2 ==0 && k%5 ==0){
            return -1;
        }
        
        int prev_rem =0;
        
        for(int i=1;i<=k;i++){
           prev_rem = (prev_rem*10 + 1)%k ;
            
            if(prev_rem ==0){
                return i;
            }               
        }
        
        return -1;        
        
    }
};