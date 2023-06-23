class Solution {
public:
    void PrimeFactors(set<int>&st, int num)
    {
        int divisor = 2;
        while(num > 1)
        {
            if (num % divisor == 0) 
            {
                st.insert(divisor);
                num /= divisor;
            }
            else divisor++;
        }
    }
    int distinctPrimeFactors(vector<int>& nums) 
    {
        set<int>st;
        for (auto it : nums) {
            PrimeFactors(st, it);
        }
        return st.size();
    }
};