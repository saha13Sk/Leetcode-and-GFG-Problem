class Solution {
public:
    int findComplement(int num) {
       int temp = num, xr =1;
        while(temp !=0){
            num=num^xr;
            xr = xr<<1;
            temp = temp>>1;
        }
        return num;
    } 
};