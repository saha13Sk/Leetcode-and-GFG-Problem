class Solution {
public:
    int numberOfCuts(int n) {
        if(n==0 || n==1)
            return 0;
        if(n%2==0){
            return n/2;
        }
            return (2*numberOfCuts(n-1)) +1;
    }
};