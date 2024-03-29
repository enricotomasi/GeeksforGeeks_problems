//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int minSteps(string S)
	{
	    // Your code goes here
	    int n = S.length();
	    int dp[n] = {};
	    dp[0] = 1;
	    
	    for (int i=1; i<n; i++)
	    {
	        dp[i] = dp[i-1]+1;
	        if (i%2==1 && S.substr(0,(i+1)/2) == S.substr((i+1)/2, (i+1)/2))
	        {
	            dp[i] = min(dp[i], dp[i/2]+1);
	        }
	    }
	    
	    return dp[n-1];
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
        Solution ob;
   		cout << ob.minSteps(s);

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends