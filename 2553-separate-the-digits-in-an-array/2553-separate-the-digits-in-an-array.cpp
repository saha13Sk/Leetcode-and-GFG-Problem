class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
       
        vector<int>vec;
       
        
        // store the value 
        
        for(int i=0;i<nums.size();i++){
          
            int d=nums[i];     
            vector<int>v;     
             while(d){                        
                v.push_back(d%10);
               d/=10;
            }  
          reverse(v.begin(),v.end());
            for(int j=0;j<v.size();j++){
                vec.push_back(v[j]);
            }

         }
        return vec;
    }
};