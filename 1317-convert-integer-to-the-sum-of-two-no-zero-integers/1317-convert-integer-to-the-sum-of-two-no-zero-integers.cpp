class Solution {
public:
    
     
           bool non_zero(int n) {
        while (n>0)
        {
            if (n % 10 == 0)
                return false;
            n /= 10;
        }
        return true;
    }
    
    
    vector<int> getNoZeroIntegers(int n) {
        vector<int> vec;
        int i=1;
        while (i<n)
        {
            if ((non_zero(i)) && (non_zero(n-i)))
            {
                vec.push_back(i);
                vec.push_back(n-i);
                return vec;
            }  
            i++;
        }
        return vec;
        
        
    }
};