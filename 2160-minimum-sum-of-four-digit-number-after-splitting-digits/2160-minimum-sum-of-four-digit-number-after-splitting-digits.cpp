class Solution {
public:
   int minimumSum(int num)
{

    // vector
    vector<int> vec;

    // extract the digit
    while (num !=0)
    {

        int d = num % 10;
        if(d!=0)
        vec.push_back(d);        
        num = num / 10;
    }
        // sorting the numbers
    sort(vec.begin(),vec.end());

    // let two variable
    int num1 = 0, num2 = 0;

    // loop
    for (int i = 0; i <vec.size(); i++)
    {

        // even number index one side
        if (i%2 ==0)
        {
            num1 = num1*10 + vec[i];
        }
        else
        {
            num2 = num2*10 + vec[i];
        }
    }

    return num1 + num2;
}

};