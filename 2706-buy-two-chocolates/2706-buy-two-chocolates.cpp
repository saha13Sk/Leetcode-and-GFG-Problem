class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
       sort(prices.begin(),prices.end());
        
        int sum = prices[0] + prices[1];
        int res=0;
        
       if(sum <= money){
            
            res = money - sum;
        }
        else{
            return money;
        }
        
        return res;
    }
};