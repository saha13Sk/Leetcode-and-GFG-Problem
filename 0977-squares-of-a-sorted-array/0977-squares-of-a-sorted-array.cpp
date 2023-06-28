class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int>vec;
        for(auto it : nums){
          int i = it*it;        
            vec.push_back(i);
        }
        
        sort(vec.begin(),vec.end());
        return vec;
            
        
    }
};