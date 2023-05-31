class Solution {
public:
    bool checkPowersOfThree(int n) {
        /*
        while(n>0){
        if((n&n-2)==0)
            return true;
        }
        return false;
        */
        
        /// ** where n =1 start, n=0 false
       while (n > 0)
    {
        if (n % 3 == 2){
            return false;
        }
           n/=3;
    }
    return true;
    }     
  
};