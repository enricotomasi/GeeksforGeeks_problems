//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    
    int rec(int i, vector<int> &dp, unordered_map<int, int> &map)
    {
        if (i == 5 * 6)
        {
            return 0;
        }
        
        if (dp[i] != -1)
        {
            return dp[i];
        }
        
        int ans = INT_MAX;
        
        for (int j = 1; j <= 6; j++)
        {
            int x = i + j;
            int temp = INT_MAX;
            
            if (map[x] > i)
            {
                temp = rec(map[x], dp, map) + 1;
            }
            
            ans = min(ans, temp);
        }
        
        return dp[i] = ans;
    }
    
    int minThrow(int N, int arr[])
    {
        // code here
        int n = 5;
        int m = 6;
        
        unordered_map<int, int> map;
        
        for (int i = 1; i <= n * m; i++)
        {
            map[i] = i;
        }
        
        for (int i = 0; i < (N * 2); i += 2)
        {
            map[arr[i]] = arr[i + 1];
        }
        
        vector<int> dp(31, -1);
        
        return rec(1, dp, map);
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[2*N];
        for(int i = 0;i < 2*N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.minThrow(N, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
