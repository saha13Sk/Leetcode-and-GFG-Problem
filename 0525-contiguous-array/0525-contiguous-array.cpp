class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int n= nums.size();
        
        unordered_map<int,int>mpp;
        
        int sum=0;
        int ls = 0 ;   // longest_subarray
        
        for(int i=0;i<n;++i){
            sum += nums[i]==0?-1:1;
            
            if(sum == 0){
                if(ls < i+1){
                    ls = i+1;
                }
                
            }
            else if(mpp.find(sum)!= mpp.end()){
                if(ls< (i-mpp[sum])){
                    ls = i - mpp[sum];
                }
            }
            else
                mpp[sum] = i;
                       
                   }  
        return ls;
    }
};