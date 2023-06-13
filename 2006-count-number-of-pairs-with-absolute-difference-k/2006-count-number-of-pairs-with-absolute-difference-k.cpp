class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        
        int cnt=0;
        int n= nums.size();
        vector<int>vec;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((nums[i]-nums[j])*(nums[i]-nums[j]) == k*k){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};