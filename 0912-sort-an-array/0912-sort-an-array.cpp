class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        vector<int>vec(nums.begin(),nums.end());
        sort(vec.begin(),vec.end());
        return vec;
    }
};