class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        
        
        int n=nums.size();
       sort(nums.begin(),nums.end());
        
        set<double>st;
        int i=0;
        int j=n-1;
        
        while(i<j){
            st.insert((nums[i]+nums[j])/2.00);
            i++;
            j--;
        }
        return st.size();
        
        
        
        
        
        
        
        
        
        
        
        
    }
};