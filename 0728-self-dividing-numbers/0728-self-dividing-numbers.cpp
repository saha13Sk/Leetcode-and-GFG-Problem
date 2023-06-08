class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        long long int l= left ;
        long long int r= right ;
        
        vector<int>vec;
        
          for(int i=left;i<=right;i++){
              
              int temp = i;
              while(temp>0){
                  int digit = temp%10;
                  if(digit ==0 || i%digit !=0){
                        break;
                  }
                    temp /=10;
              }
              if(temp==0){
                  vec.push_back(i);
              }    
         }
        return vec;

    }
};