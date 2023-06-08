class Solution {
public:
    int countElements(vector<int>& nums) {
    set<int>st;
        int cnt=0;
        int n= nums.size();
     
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        
        
            int maxi = *max_element(st.begin(),st.end());
            int mini = *min_element(st.begin(),st.end());
          
        for(int i=0;i<n;i++){
            if(nums[i] > mini && nums[i] < maxi) {
                cnt++;
            }
          
        }
       
        
        return cnt;
    }
};