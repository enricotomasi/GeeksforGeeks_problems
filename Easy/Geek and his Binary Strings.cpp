//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int prefixStrings(int N)
	{
	    // Your code goes here
	    int m = pow(10,9)+7;
	    uint64_t dp[N+1];
        
        dp[0]=1;
        dp[1]=1;

        for(int i=2;i<=N;i++)
        {
            dp[i]=0;
            for(int j=0;j<i;j++)
            {
                dp[i]=(dp[i] %m) + ((dp[j] %m) * (dp[i-j-1] %m)) %m;
            }
    }
    
    return dp[N]%m;
	    
	    
	}

};
	

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
       	int n;
       	cin >> n;

       

        Solution ob;
        cout << ob.prefixStrings(n);
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends