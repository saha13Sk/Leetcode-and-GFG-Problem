class Solution {
public:
    int countOdds(int low, int high) {
        int l=low;
        int h = high;
        int cnt=0;
       
        for(int i =l;i<=h;i++){
            
            if(i%2!=0){
            cnt++;
            }
        }
        return cnt;
        
    }
};