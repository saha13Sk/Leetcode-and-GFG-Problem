class Solution {
public:
    int bitwiseComplement(int n) {
        int cnt =1;
        while(cnt<n){
            cnt = (cnt<< 1) | 1;
        }
        return n ^ cnt;
    }
};