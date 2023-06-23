#define ll                  long long

class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
     
        int n = nums.size();
        
        // create mpp function store value and index
        map<int,vector<int>>mpp;
        
        for(int i=0;i<n;i++){
            mpp[nums[i]].push_back(i);
        }
        
        vector<ll>res(n);
        
        for(auto it : mpp){
            vector<int>vec = it.second;  // store all index
            ll totalSum = 0;
            
            for(auto i: vec){
                totalSum += (ll)i;
            }
            
            ll currSum =0, restSum =0;
            for(int i=0;i<vec.size();i++){
                restSum = totalSum - currSum - vec[i];
                
               ll leftSum  = (vec[i]*(ll)i) - currSum;
                ll rightSum = restSum - (vec[i] * (ll)(vec.size() - i - 1));
                
                res[vec[i]] = leftSum + rightSum;
                currSum = currSum + vec[i];
            }
        }
        return res;
        
    }
};