class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        vector<int>vec;
        map<int,int>mpp;
        
        for(int i=0;i<n;i++ ){
            mpp[nums[i]]++;
        }
        
        for(auto it: mpp){
            if( it.second ==2){
                vec.push_back(it.first);
            }
        }
        
        return vec;
    }
};