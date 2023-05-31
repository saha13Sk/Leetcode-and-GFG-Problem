class Solution {
public:
    int alternateDigitSum(int n) {
        
        
        
    int cnt = 0, sum = 0;
    int num = n;

    // count the value
    while (num > 0)
    {
        num = num / 10;
        cnt= cnt+1;
    }
    char sign = '+';

    // if cnt is even number than '-'

    if (cnt % 2 == 0)
    {
        sign = '-';
    }

    // calculate the value
    while (n> 0)
    {
        int ld = n % 10;
        // even number
        if (sign == '-')
        {
            sum = sum + ld * (-1);
            sign = '+';
        }
        else
        {
            sum = sum + ld;
            sign = '-';
        }
        n = n / 10;
    }
  return sum;  
             
               
    }
};