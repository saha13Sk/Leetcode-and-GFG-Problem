class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
             
      set<int>st;
        
        //int j=0;
       
        vector<int>vec;
        
        for(int i=0;i<n;i++){
            if(nums[i] !=0){
                vec.push_back(nums[i]);
            }
          
        }
   
        for(int i=0;i<vec.size();i++){
            st.insert(vec[i]);
        }
        
        return st.size();
        
        
        
        
        
        
    }
};