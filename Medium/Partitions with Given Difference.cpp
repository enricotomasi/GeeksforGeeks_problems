//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
  public:
    int countPartitions(int n, int d, vector<int>& arr)
    {
        // Code here
        int m = 1000000007;
        int s = 0; 
        
        for (int i =0 ; i < n; i++)
        {
            s += arr[i];
        }
        
        long long int ans = 0;
        
        vector<int> dp(s + 1, 0);
        
        if (arr[0] == 0)
        {
            dp[0] = 2; 
        }
        else 
        {
            dp[arr[0]] = 1; 
            dp[0] = 1; 
        }
        
        for (int i = 1; i < n ; i++) 
        {
            vector<int> temp(s + 1, 0);
            
            for (int j = 0; j <= s; j++) 
            {
               int t = 0; 
               
               if (arr[i] <= j)
               {
                   t = dp[j - arr[i]]; 
               }
               
               int k = dp[j];
               
               temp[j]= (t + k) % m; 
            }
            
            dp = temp; 
        }
        
        for (int i = 0; i <= s; i++)
        {
            if (dp[i] == 0)
            {
                continue; 
            }
            
            int k = s - i; 
            int c = dp[i];
            
            if (i >= k && i - k == d) 
            {
                ans = (ans + c) % m; 
            }
        }
        
        return ans; 

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends
