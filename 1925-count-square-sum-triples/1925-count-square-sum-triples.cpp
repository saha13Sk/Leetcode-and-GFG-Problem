class Solution {
public:
    int countTriples(int n) {
        
        // find c, a=1,b=2 
       double mult;
        int ans=0; 
       for(int i=1;i<=n;i++){
           for(int j=i+1;j<=n;j++ ){
               mult = sqrt(i*i + j*j);
               
               if((int)mult==mult && mult<=n){
                   ans = ans + 2;
               }
           }
       }
        return ans;
    }
};