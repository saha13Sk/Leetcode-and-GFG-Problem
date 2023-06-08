class Solution {
public:
    vector<int> constructRectangle(int area) {
        // sqrt method
        vector<int>vec;
        int ans;
        for(int i=1;i<=sqrt(area);i++){
            if(area%i==0)
                ans =i;
        }
        vec.push_back(area/ans);
        vec.push_back(ans);
        return vec;
        
    }
};