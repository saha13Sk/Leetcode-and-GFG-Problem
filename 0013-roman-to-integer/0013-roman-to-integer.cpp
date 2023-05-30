class Solution {
public:
    int romanToInt(string s) {
        
    map<char, int> mpp;

    // store the value
    mpp.insert(make_pair('I', 1)); // when two value strong in map must use make_pair
    mpp.insert(make_pair('V', 5));
    mpp.insert(make_pair('X', 10));
    mpp.insert(make_pair('L', 50));
    mpp.insert(make_pair('C', 100));
    mpp.insert(make_pair('D', 500));
    mpp.insert(make_pair('M', 1000));

    // string length

    // int res= mpp.get(s.charAt(length()-1));
    int len = s.length(), num, sum = 0;
    for (int i = 0; i < len;)
    {
        if (i==(len -1)||(mpp[s[i]] >= mpp[s[i + 1]]))
        {
            num = mpp[s[i]];
            i++;
        }
        else
        {
            num = mpp[s[i + 1]] - mpp[s[i]];
            i = i + 2;
        }
        sum = sum + num;
    }
    return sum;
    }
};