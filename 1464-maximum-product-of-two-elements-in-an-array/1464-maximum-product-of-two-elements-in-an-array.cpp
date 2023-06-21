class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int temp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                temp = (nums[i]-1)*(nums[j]-1);
            }
        }
        return temp;
        
        
        
        
        
    }
};