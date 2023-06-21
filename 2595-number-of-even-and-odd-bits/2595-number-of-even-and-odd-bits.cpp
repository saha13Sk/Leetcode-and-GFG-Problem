class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even_cnt=0,odd_cnt=0,i=0;
        while(n!=0){
            if(i%2==0 and (n&1)==1)even_cnt++;
            if(i%2!=0 and (n&1)==1)odd_cnt++;
            i++;
            n=n>>1;
        }
        return {even_cnt,odd_cnt};
        
    }
};