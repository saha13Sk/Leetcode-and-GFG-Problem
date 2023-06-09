class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int maxi_element = *max_element(nums.begin(),nums.end());  // return maximum element
           
        for(int i=0;i<nums.size();i++){
            
            if(maxi_element<nums[i]*2 && maxi_element!= nums[i]){
                return -1;   
            }            
          }
        return max_element(nums.begin(),nums.end())-nums.begin(); // return index number
        
    }
    
    
    
    
    
    
};