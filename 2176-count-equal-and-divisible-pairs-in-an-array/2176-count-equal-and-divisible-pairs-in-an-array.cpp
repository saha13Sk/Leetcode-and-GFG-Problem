class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        
        int cnt =0;
       // sort(nums.begin(),nums.end());
        int n= nums.size();
        vector<int>vec;
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(nums[i]==nums[j]){
                   if(i*j %k==0){
                       cnt++;
                   }
                }
            }
        }
      
        return cnt;
    }
};