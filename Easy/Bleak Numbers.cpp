//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:

    /*
        Largest count of set bits in any number smaller than n cannot exceed ceiling of Log2n.
    */

	int is_bleak(int n)
	{
	    // Code here.
	    for (int i = 0; i < log2(n) + 1; i++)
	    {
	        //cout << i << " " << countsb(i) << endl;
	        if (__builtin_popcount(n - i) == i)
	        {
	            return 0;
	        }
	    }
	    
	    return 1;
	    
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends