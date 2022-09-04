//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minSteps(int N) 
	{ 
	    // Your code goes here
	    
	    // Used hint:
	    // f(n) = 1 + f(n-1)
        // f(n) = min(1 + f(n-1), 1 + f(n/2)) // if n is divisible by 2
        // f(n) = min(1 + f(n-1), 1 + f(n/3)) // if n is divisible by 3
     
        if(N <= 1) return 0;
     
        int dp[N+1] {};
        
        for(int i = 2; i<=N; i++)
        {
            int a = INT_MAX;
            int b = INT_MAX;
            int c = INT_MAX;
            
            if(i%2 == 0) a = dp[i/2];
            if(i%3 == 0) b = dp[i/3];
                         c = dp[i-1];
                         
            dp[i] = min(min(a,b), c) + 1;
        }
        
       
        return dp[N];
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
	    cout << ob.minSteps(n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends