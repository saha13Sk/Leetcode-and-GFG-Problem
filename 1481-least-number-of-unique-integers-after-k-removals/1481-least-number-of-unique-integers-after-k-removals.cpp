class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
         int n = arr.size();
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    vector<int> vec;

    for (auto it : mpp)
    {
        vec.push_back(it.second);
    }
    sort(vec.begin(), vec.end());

    int i = 0;

    for (i = 0; i < vec.size(); i++)
    {

        if (k >= vec[i])
        {
            k = k - vec[i];
        }
        else
        {
            break;
        }
    }

    return vec.size() - i;
    }
};