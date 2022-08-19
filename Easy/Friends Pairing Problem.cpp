//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int countFriendsPairings(int n) 
    { 
        // code here
        long long int m = pow(10,9)+7;
        
        if (n<=2) return n;
        
        long long int dp[n+1];
        
        dp[1] = 1;
        dp[2] = 2;
        
        for (int i=3; i<=n; i++)
        {
            dp[i] = (dp[i-1]+(i-1)*dp[i-2]) %m;
        }
        
        // for (int i=0; i<=n; i++) cout << dp[i] << " ";
        // cout << endl;
        
        return dp[n];
       
    }
};    
 

//{ Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 

// } Driver Code Ends