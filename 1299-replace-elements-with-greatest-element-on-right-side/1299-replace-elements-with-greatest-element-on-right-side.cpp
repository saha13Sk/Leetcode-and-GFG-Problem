class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n= arr.size();
        int indx = -1;
       
        vector<int>vec=arr;  // copy element
        
        for(int i=n-1;i>=0;i--){
            vec[i] = indx;
            indx = max(indx,arr[i]);
        }
        return vec;
        
    }
};