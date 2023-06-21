class Solution {

public:
    int mostFrequent(vector<int>& nums, int key) {
        
        int n= nums.size();
        int maxi =0;
        int res =0;
        
        unordered_map<int,int>mpp;
        
        for(int i=0;i<n-1;i++){
            
            if(nums[i] == key){
                int target = nums[i+1];
                mpp[target]++;
            }
        }
        
        for(auto it : mpp){
          if(it.second>maxi){
              maxi = it.second;
              res = it.first;
          }
        }
        
        return res;
     
    }
};