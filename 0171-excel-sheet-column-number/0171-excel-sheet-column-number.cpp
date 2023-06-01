class Solution {
public:
    int titleToNumber(string columnTitle) {
         int res =0;

        // store the string
        for(auto c: columnTitle){
            int d =c -'A' +1 ;
            res = res*26 + d;
        }
        return res;
    }
};