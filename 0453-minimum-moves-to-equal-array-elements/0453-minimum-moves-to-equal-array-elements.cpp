class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        
        int min_element = nums[0];
        int sum= nums[0];
        
        if(n<=1){
            return 0;
        }
        // minmum element
       // int min_element = *min(nums.begin(),nums.end());
        
        for(int i=1;i<n;i++){
            min_element = min(min_element,nums[i]);
           sum= sum + nums[i]; 
            
        }
        return sum - long(min_element) * long(n); 
        
    }
};