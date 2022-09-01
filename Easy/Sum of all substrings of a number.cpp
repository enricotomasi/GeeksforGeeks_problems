//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s)
    {
        // your code here
        
        // HINT: sumofdigit[i] = i+1 * num[i] + 10 * sumofdigit[i-1]
        
        int n = s.length();
        long long int dp[n];
        long long int mod = pow(10,9) + 7;
        long long int ans = s[0] - '0';
        dp[0] = ans;
        
        for(int i = 1; i < n; i++)
        {
            dp[i] = ((i+1)*(s[i] - '0') + 10*(dp[i - 1]))%mod;
            ans += dp[i];
            ans %= mod;
        }
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking string
        string s;
        cin>>s;
        Solution ob;
        //calling sumSubstrings() function
        cout << ob.sumSubstrings(s) << endl;
        
    }
    return 0;
}

// } Driver Code Ends