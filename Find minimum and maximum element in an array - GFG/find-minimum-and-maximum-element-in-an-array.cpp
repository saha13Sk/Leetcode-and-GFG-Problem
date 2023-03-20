//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    
    

//sort(arr, arr + n);



return make_pair(*min_element(a , a+n), *max_element(a, a+n));
   
    
   // int el1 = *min_element(a, a + n);
   // cout << "Minimum Element is " << el1 << endl;

   // int el2 = *max_element(a, a + n);
    //cout << "Maximum Element is " << el2 << endl;

    //cout<<el1<<el2;
   // return 0;
    
    
    
    
    
}