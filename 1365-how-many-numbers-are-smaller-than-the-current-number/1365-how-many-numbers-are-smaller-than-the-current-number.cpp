class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
       int n = nums.size();
        vector<int>vec;
        int i=0;
        int j=0;
        int cnt =0;
        
        while(i<n){
            cnt =0,j=0;
        while( j<n){
            
            if(j!=i && nums[i]>nums[j]){
                cnt++;                     
            }
            j++;   
            
        }
          vec.push_back(cnt);
            i++;
        
        }
            return vec;
         
        
    }
};