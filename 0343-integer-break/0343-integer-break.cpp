class Solution {
public:

   int fun(int n,int i){
       
       if(n == 0) return 1;
        if(n < 0 || i <= 0) return 0;
        int res = fun(n, i-1);  // call the function             
        res = max(res, i*fun(n-i, i));   
        return res;
   
   
   
   }
    int integerBreak(int n) {
       return fun(n, n-1);
    }

};