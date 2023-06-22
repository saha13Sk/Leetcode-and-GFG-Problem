class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        int cnt =1;
        int count =1;
        
        for(int i=1;i<n;i++ ){
            if(nums[i-1]>= nums[i]){
                cnt++; 
            }
        }
        
        for(int i=1;i<n;i++){
            if(nums[i-1]<= nums[i]){
                count++;
            }
        }
        
        
        if(cnt==n || count==n){
            return true;
        }
        return false;
    }
};