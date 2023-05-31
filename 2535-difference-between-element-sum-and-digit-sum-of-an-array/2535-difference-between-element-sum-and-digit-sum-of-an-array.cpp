class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
          int element_sum = 0, digit_sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        // element sum numbers
        element_sum += nums[i];
        //  variable data store
        int temp = nums[i];
        while (temp != 0)
        {
            digit_sum += temp % 10;
            temp /= 10;
        }
    }

    int ans = element_sum - digit_sum;
    if(ans<0){
        return ans*(-1);
    }
    else{
        return ans;
    }
    
    }
};