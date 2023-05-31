class Solution {
public:
    int findGCD(vector<int>& nums) {
        
     //vector<int>num(nums);
// minimum element of array
int a = *min_element(nums.begin(),nums.end());
// max element of array
int b = *max_element(nums.begin(),nums.end());
        return gcd(a,b);
   /*    
//  gcd(a,b) = gcd(a%b,b);

while (a>0,b>0)
{

    if (a > b)
        a = a % b;
    else
        b = b % a;
}
if (a == 0)
    return b;
else
    return a;
        
       */ 
        
    }
};