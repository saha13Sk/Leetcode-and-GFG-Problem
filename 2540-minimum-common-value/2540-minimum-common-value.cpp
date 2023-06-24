
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int>mpp;
    for(auto it : nums1){
        mpp[it]++;
    }
        
        for(auto it : nums2){
           
            if(mpp.find(it)!= mpp.end()){
                return it;
           
          }
        }
        return -1;
        
    }
};