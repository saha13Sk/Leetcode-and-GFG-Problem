class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        
        int cnt=0;
        int n = nums.size();
       // sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            for(int j= i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){
                        if(nums[i] + nums[j] + nums[k] == nums[l]){
                            cnt++;
                        }
                    }
                }
            }
        }
        return cnt;
    }
};