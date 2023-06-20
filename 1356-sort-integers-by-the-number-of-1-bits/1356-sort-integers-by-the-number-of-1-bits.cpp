class Solution {

    public:
 
        
         static bool compare(const int& el1, const int& el2){
        int cnt1 = __builtin_popcount(el1);
        int cnt2 = __builtin_popcount(el2);
        if(cnt1 == cnt2)
            return el1 < el2;
        return cnt1 < cnt2;
    }
    vector<int> sortByBits(vector<int>& arr) {
       sort(arr.begin(),arr.end(), compare);
        return arr;
    }
    
   
};