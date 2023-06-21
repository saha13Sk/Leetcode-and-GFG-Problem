class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        
        vector<int>vec;        
        int n = encoded.size() +1;        
        int xr =0;        
        // n is odd 
        for(int i= 1;i<=n;i++){
            xr = xr ^ i;
        }
        
        // xor of all element encoded
        for(int i=1;i<encoded.size();i=i+2){
            xr = xr ^ encoded[i];  // odd index
        }
        // store the xor value in to the vector
        int temp = xr;
        vec.push_back(temp);
        
        for(auto it : encoded){
            vec.push_back(vec.back() ^ it);
        }
        return vec;
     
        
        
        
        
    }
};