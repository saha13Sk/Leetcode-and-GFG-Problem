class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int total_cnt =0;
        
        for(int i=0;i<nums.size();i++){
            int cnt =0;
            while(nums[i]>0){
                cnt++;
                nums[i]/=10;
            }
            
            if(cnt%2 ==0){
                total_cnt++;
            }
        }
        return total_cnt;
        
        
    }
};