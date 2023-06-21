class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n= nums.size();
        map<int,int>mpp;
        
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        
        for(auto it: mpp){
            if(it.second% 2 !=0){
                return false;
            }
        }
        return true;
    }
};