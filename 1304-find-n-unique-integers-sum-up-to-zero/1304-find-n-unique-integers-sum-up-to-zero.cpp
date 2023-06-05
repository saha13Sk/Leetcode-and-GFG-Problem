class Solution {
public:
    vector<int> sumZero(int n) {
       
        vector<int> vec;
        if(n == 0) return vec;
        if(n%2 != 0) vec.push_back(0);  
        for(int i=1;i<=floor(n/2);i++){
            vec.push_back(i);
            vec.push_back(-i);
        }
        return vec;
        
        
    }
};