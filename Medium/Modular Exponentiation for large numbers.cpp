//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	/*
	    Hint 1:
	    x2n can also be written as (xn)2. Think about how this can help you in finding the power effeciently.
	    
	    Hint 2:
	    Try to divide problem into subproblems.
	
	*/
	
	
	public:
		long long int PowMod(long long int x, long long int n, long long int M)
		{
		    // Code here
            if (n == 0)
            {
                return 1;
            }
            
            if (n == 1)
            {
                return x % M;
            }
            
		    if (x % M == 0)
		    {
		        return 0;
		    }
            
            if (n % 2 == 0)
            {
                return PowMod((x * x) % M, n / 2, M) % M;
            }
            
            return (x * PowMod(x, n - 1, M)) % M;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int x, n, m;
    	cin >> x >> n >> m;
    	Solution ob;
    	long long int ans = ob.PowMod(x, n, m);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends
