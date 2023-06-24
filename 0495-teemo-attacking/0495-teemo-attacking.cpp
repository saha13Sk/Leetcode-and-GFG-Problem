class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        
        int n = timeSeries.size();
        int cnt =0;
        
        for(int i=1;i<n;i++){
            
            if(timeSeries[i-1] + duration <= timeSeries[i]){
                cnt += duration;
            }
            else{
                cnt += timeSeries[i] - timeSeries[i-1];
            }
        }
        
        
        cnt += duration;
        return cnt;
        
        
    }
};