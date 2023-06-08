class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double res = accumulate(salary.begin()+1,salary.end()-1,0);
        return res/(salary.size()-2);
    }
};