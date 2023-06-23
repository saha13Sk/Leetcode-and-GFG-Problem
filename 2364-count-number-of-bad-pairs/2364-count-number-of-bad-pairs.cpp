

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        
        long long n= nums.size();    
         unordered_map<int,int>mpp;
         long long cnt =0;          
        
        for(int i=0;i<n;i++){
                cnt+= i - mpp[i- nums[i]]++; 
            
        }
        return cnt;
    }
};