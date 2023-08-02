class Solution {
public:
    string baseNeg2(int n) {
        
        
        // note : divisible -2, n= n/-2
       string str;
        if(n==0) return "0";
        while(n!=0){
            int temp = n%(-2);
            n/=(-2);
            if(temp<0){
                temp = temp + 2;   // convert positive number 
                n++;                // actual number convert 2
            }
            str.insert(str.begin(),temp+'0');  // store the value into the string  
        }
        return str;
 
        
    }
};