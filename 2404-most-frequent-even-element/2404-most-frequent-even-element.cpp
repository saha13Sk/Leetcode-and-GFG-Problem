class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        
        map<int,int>mpp;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]%2 ==0){
            mpp[nums[i]]++;
            }
        }
        
        int indx = -1;
        int min = INT_MIN;
        
        for(auto it : mpp){
            if(it.second > min){
                indx = it.first;
                min = it.second;
            }
        }
        
        return indx;
        
        
        
    }
};