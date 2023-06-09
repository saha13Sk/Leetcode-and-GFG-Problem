class Solution {
public:
    int countLargestGroup(int n) {
       
        int i,num=0,d,sum=0;
        int total=0;
       
        vector<int>vec(37,0);


        for(i=1;i<=n;i++)
        {
            num = i;
            while(num!=0)
            {
                d=num%10;
                sum+=d;
                num/=10;
            }
           vec[sum]++;
            sum=0;
        }

        int maxi = *max_element(vec.begin(),vec.end());
        for(i=0;i<37;i++)
        {
            if(vec[i]==maxi)
            total++;
        }
        
        return total;
    }
};