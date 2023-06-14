class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
       
        
        int mini_element1 = INT_MAX; 
        int mini_element2 = INT_MAX; 
        
        
        for(auto it: nums){
            
            if(it<= mini_element1 ){
                 mini_element1 = it;
            }
            else if(it<=  mini_element2 ){
                 mini_element2 = it; 
            }
            else{
                return true;
            }
        }
        
        return false;
        
        
        
        
        
        
        
    }
};