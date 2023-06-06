class Solution {
public:
    double trimMean(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        
        int n= (arr.size())*(5.0/100.0);
        double sum=0;
        int cnt=0;
        for(int i=n;i<arr.size()-n ;i++){
            sum = sum + arr[i];
            cnt++;
        }          
        return sum/cnt;
        
       
    }
};