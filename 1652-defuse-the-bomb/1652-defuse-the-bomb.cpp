class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
        vector<int>vec;
        
        int n= code.size();
        int sum = 0;
        
        
        for(int i=0;i<n;i++){
            
            sum =0;
            if(k>0){
                
                for(int j=i+1;j<=i+k;j++){
                    sum +=code[j%n];
                }
            }
            else if(k<0){
                
                for(int j=i-1;j>= i+k;j--){
                    
                    sum+= code[(j+n)%n];
                }
                    
            }
        vec.push_back(sum);
            
        } 
        return vec;
        
        
        
    }
};