//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	int countWays(int N)
	{
		// Your code goes here
		 long long int m = 1000000007;
		 long long int nm = N/2;
		 
		 if (N % 2 == 0)
		 {
		     return (nm * (nm - 1) * (nm - 2) / 6 + ((nm * (nm - 1) /2) * nm)) % m;
		 }
		 else
		 {
		     return (nm * (nm - 1) * (nm - 2) / 6 + ((nm + 1) * nm / 2) * nm) % m;
		 }
		

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
	    cout << ob.countWays(n) << "\n";
   
    }
    return 0;
}
// } Driver Code Ends