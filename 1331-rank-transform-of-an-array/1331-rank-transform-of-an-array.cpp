class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        int n= arr.size();
       set<int>st;
        for(int i =0;i<n;i++){
            st.insert(arr[i]);
        }
        
        map<int,int> mpp;
        
        int rank=1;
        for(auto it:st){
            mpp[it] = rank;
            ++rank;
        }
        
        for(int i=0;i<n;i++){
            arr[i] = mpp[arr[i]];    // it's return rank
        }
        return arr;
    }
};