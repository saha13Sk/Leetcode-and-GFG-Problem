class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int xr =0;
        for(auto it : nums){
            xr = xr ^ it;
        }
        return xr;
    }
};