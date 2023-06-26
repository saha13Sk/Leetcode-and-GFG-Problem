class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        vector<int>vec;
        unordered_set<int>st;        
        
        for(int i=0;i<nums2.size();i++){
            for(int j=0;j<nums3.size();j++){
                
                if(nums2[i] == nums3[j]){
                   st.insert(nums2[i]);
                    
                }
            }
        }
        
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums3.size();j++){
                
                if(nums1[i] == nums3[j]){
                   st.insert(nums1[i]);
                    
                }
            }
        }
         for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                
                if(nums1[i] == nums2[j]){
                    st.insert(nums1[i]);
                    
                }
            }
        }
        
        
        for(auto it: st){
            
            vec.push_back(it);
        }
        
        
        
        return vec;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};