class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n = nums.size();
        
        unordered_map<int,int>mpp;
        
        vector<int>vec;
        
        for(int i=1;i<=n;i++){
           
           mpp[i]=0;            
        }
    
        
        for(auto it : nums){
           mpp[it]++;
        }
            for(auto i : mpp){
                if(i.second == 0){
                    vec.push_back(i.first);
                }
            }
            
       return vec;
        
    }
};