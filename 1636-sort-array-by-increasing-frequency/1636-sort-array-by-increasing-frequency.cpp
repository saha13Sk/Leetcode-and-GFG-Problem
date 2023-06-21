class Solution {
    
    

    
   static bool comp(pair<int,int>el1, pair<int,int>el2){
        if(el1.second == el2.second ) return el1.first > el2.first;
        return el2.second > el1.second;
           
    }     
    public:
    vector<int> frequencySort(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        map<int,int>mpp;
        
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        
        vector<pair<int,int>> vec;
        for(auto it : mpp){
            vec.push_back(it);
        }
        
        sort(vec.begin(),vec.end(),comp);
        vector<int>res;
        
        for(int i=0;i< vec.size();i++){
            for(int j=0;j<vec[i].second;j++){
                res.push_back(vec[i].first);
            }
        }
        
        return res;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};