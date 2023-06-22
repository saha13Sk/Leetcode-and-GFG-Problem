class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
      int n= bits.size()-1;
        int cnt ;
        

        for(cnt =0;cnt <n;){
            if(bits[cnt] ==0){
                cnt=cnt+1;
            }
            else if(bits[cnt] ==1){
                cnt = cnt +2;
            }
        }
        
        if(cnt == n){
            return true;
        }
        return false;
    }
};