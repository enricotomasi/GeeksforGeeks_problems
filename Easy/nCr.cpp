//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
     long pot(long a, long y)
     { 
        int m = pow(10,9)+7;
        if(y==0)    return 1;
        long p = pot(a,y/2)%m;
        p = (p*p)%m;
        return (y%2==0)?p:(a*p)%m;
    }
    
    long int ncr(int n, int r)
    {
        //complete the function here
        int m = pow(10,9)+7;
        
        long dp[n+1];
        dp[0] = 1;
        
        for(int i = 1; i<=n; i++) dp[i] = (i*dp[i-1])%m;

        if(r>n) return 0;

        long q = dp[n], down = (dp[r]*dp[n-r])%m;
        long ans = (q*pot(down, m-2))%m;
        return (int) ans;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n, r;
        cin >> n >> r;
        Solution ob;
        cout << ob.ncr(n, r) << endl;
    
    }
    return 0; 
} 

// } Driver Code Ends