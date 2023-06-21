class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
          int n =  nums.size();
        
        vector<int> vec(n,0);
        unordered_set<int> st1;
        unordered_set<int> st2;
        
        for(int i = 0; i < n; i++){
            
            st1.insert(nums[i]);
            
            vec[n-i-1] -= st2.size();            
            st2.insert(nums[n-i-1]);
            
            vec[i] += st1.size();
        }
        return vec;
    }
};