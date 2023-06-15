class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum = 0;
        int total_size = nums.size()*(nums.size() + 1)/2;
        for (auto it : nums) {
            sum += it;
        }
        return total_size - sum;
    }
};