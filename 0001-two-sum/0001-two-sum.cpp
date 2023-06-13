class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<int>vec;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] + nums[j] == target){
                    vec.push_back(i);
                    vec.push_back(j);
                }
            }
        }
        sort(vec.begin(),vec.end());
 
        return vec;
    }
};