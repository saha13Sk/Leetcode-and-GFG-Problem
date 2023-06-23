class Solution {
public:
     int M = 1e9 + 7;

    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int>mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            nums[i] -= rev(nums[i]);
            mpp[nums[i]]++;
        }
        int cnt = 0;
        for (auto i : mpp)
        {
            cnt = cnt + ((((long)(i.second) * (long)(i.second - 1)) / 2) % M);
        }
        
        return cnt % M;
    }    
     

    int rev(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum = (sum * 10) + (n % 10);
            n = n / 10;
        }
        return sum;
    }
   
};