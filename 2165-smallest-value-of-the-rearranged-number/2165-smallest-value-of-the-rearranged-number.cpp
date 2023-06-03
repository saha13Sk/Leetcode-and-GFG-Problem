class Solution {
public:
    long long smallestNumber(long long num) {
           
        vector<int>vec;
        
        if(num==0) return 0;
        if(num<0){
            num*=-1;
            while(num){
                vec.push_back(num%10);
                num/=10;
            }
                sort(vec.begin(),vec.end(),greater<int>());
            long long ans=0;
            
            for(int i=0;i<vec.size();i++){
                ans=ans*10 + vec[i];
            }
              return -1*ans;
        }
        else{
            while(num){
                vec.push_back(num%10);
                num/=10;
            }
            long long ans=0;
            sort(vec.begin(),vec.end());
            
            
            for(auto x: vec) cout<<x<<" ";
            cout<<endl;
            int zero=0; 
            int i=0;
            
            while(vec[i]==0) {
                zero+=1;
                i+=1;
            }
            
            ans=vec[i];
            
            
            while(zero--){
                ans=ans*10 + 0;
            }
            for(int j=i+1;j<vec.size();j++){
                ans=ans*10 + vec[j];
            }
            
            return ans;
        }
    }
};