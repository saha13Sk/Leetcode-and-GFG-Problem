//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void bitManipulation(int num, int i) {
        int n = num;
     int mask = 1 << (i - 1);

    bool ans = mask & n;
  int ans1 = mask | n;
   int ans2 = ~mask & n;

    cout<< ans << " " << ans1 << " " << ans2;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends