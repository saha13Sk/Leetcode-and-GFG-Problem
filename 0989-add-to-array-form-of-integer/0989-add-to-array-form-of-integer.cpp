class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
   
        vector<int>vec;
             
        int n=num.size();
        int curr = k;
        
        int i = n;
        while(--i >= 0 || curr > 0)
        {
            if(i >= 0)
                curr += num[i];
           vec.push_back(curr % 10);
            curr /= 10;
        }
        reverse(vec.begin(),vec.end());
        return vec;
      
        
    }
};