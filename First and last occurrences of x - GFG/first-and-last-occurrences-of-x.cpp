//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
   
   
   
   
   
     vector <int >vec(arr,arr+n);
    
         // must sorted order because binary search are only allow
       // sorted order array

       if (binary_search(vec.begin(), vec.end(), x))
      return {lower_bound(vec.begin(), vec.end(), x) - vec.begin(), upper_bound(vec.begin(), vec.end(), x) - vec.begin() - 1};
    return {-1, -1};  
       
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends