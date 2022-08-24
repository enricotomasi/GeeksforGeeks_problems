//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int n1=str1.length();
	    int n2=str2.length();
	    
	    int dp[n1+1][n2+1] = {};
	    
	    for(int i=1;i<=n1;i++)
	    {
	        for(int j=1;j<=n2;j++)
	        {
	            if(str1[i-1]==str2[j-1]) dp[i][j] = dp[i-1][j-1] +1;
	            else                     dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	    
	    int ins=n1-dp[n1][n2];
	    int del=n2-dp[n1][n2];
	    
	    return (ins+del);
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends