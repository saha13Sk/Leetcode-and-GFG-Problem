class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
                
         map<int,int> mpp;
        for(auto it:digits) mpp[it]++;
        vector<int> vec;
        for(int i=1;i<=9;i++){
          for(int j=0;j<=9;j++){
             for(int k=0;k<=8;k+=2){
                 if(mpp[i]>0){
                        mpp[i] = mpp[i]-1;
                        if(mpp[j]>0){
                            mpp[j]=mpp[j]-1;
                            if(mpp[k]>0){
                               vec.push_back(i*100+j*10+k);
                            }
                            mpp[j]++;
                        }
                        mpp[i]++;
                    }
                }
            }
        }
        return vec;
    }
};