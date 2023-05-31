class Solution {
public:
    string convertToBase7(int num) {
        
         string str="";
        int rem;
        int nums=abs(num);
        if(num==0) return "0";
        while(nums!=0){
            rem=nums%7;
            str=to_string(rem)+str;
            nums/=7;
        }
        if(num<0) return "-"+str;
        return str;
        
        
    }
};