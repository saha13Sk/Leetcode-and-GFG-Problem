class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n =nums.size();
        
        map<int,int>mpp;
        
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        
        for(auto it: mpp){
            if(it.second > 1){
                return it.first;
            }
        }
        return 0;
        
        
    }
};