class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        // sort : 2, 4, 5, 6, 7
        sort(nums.begin(),nums.end());
        int maxi_element1 = *max_element(nums.begin(),nums.end());
        int maxi_element2 = *max_element(nums.begin(),nums.end()-1) ;
        
        int mini_element1 = *min_element(nums.begin(),nums.end());  // 2
        int mini_element2 = *min_element(nums.begin()+1,nums.end()); // 4
        
       return (maxi_element1 * maxi_element2)-(mini_element1 * mini_element2);
        
        
    }
};