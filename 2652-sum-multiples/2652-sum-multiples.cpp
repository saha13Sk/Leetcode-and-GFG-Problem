class Solution {
public:
    int sumOfMultiples(int n) {
   long long int sum=0;
       
        for(long long int i =1; i<=n;i++){
            
            if(i%3==0 || i%5==0 || i%7==0)
            {
                sum+=i;
            }           
        }
        return sum;
           
    }
};