class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        
          int to = tomatoSlices;
          int ch = cheeseSlices;
        if(to%2== 1 || to < 2*ch || to > 4*ch)
        {
            return {};
        }
        return{to/2-ch,2*ch-to/2};
    }
};