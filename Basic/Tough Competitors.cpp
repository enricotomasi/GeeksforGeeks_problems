// { Driver Code Starts
//Initial Template for C++





#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int toughCompetitor(int *arr, int n)
    {
        // code here
        int ans = INT_MAX;
        sort (arr, arr+n);
        
        for (int i=0; i<n-1; i++)
        {
            ans = min(ans, (abs(arr[i]-arr[i+1])));
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        auto ans = obj.toughCompetitor(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends