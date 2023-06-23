class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        
        // target = nums[i] + c* space,  c>0
        // maximum number target
        
        
        int n = nums.size();
        
        map<int,int>mpp;
        
        int maxi = INT_MIN;
        
        for(int i=0;i<n;i++){
            mpp[nums[i]%space]++;
            maxi = max(maxi,mpp[nums[i]%space]);
        }
        
        int mini = INT_MAX;
        
        for(int i=0;i<n;i++){
            
            if(mpp[nums[i]%space] == maxi){
                mini = min(mini,nums[i]);
            }
        }
        return mini;
        
    }
};