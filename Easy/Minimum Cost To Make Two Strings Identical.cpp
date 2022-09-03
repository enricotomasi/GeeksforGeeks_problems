//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findMinCost(string X, string Y, int costX, int costY)
	{
	    // Your code goes here
	    
	    // Used hint:
	    
	    // Cost of making two strings identical is SUM of following two
        //   1) Cost of removing extra characters (other than LCS) 
        //      from X[]
        //   2) Cost of removing extra characters (other than LCS) 
        //      from Y[]
        
        // Minimum Cost to make strings identical = costX * (m - len_LCS) + 
        //                                          costY * (n - len_LCS).  
        
        // m ==> Length of string X
        // m ==> Length of string Y
        // len_LCS ==> Length of LCS Of X and Y.
        // costX ==> Cost of removing a character from X[]
        // costY ==> Cost of removing a character from Y[]
        
        // Note that cost of removing all characters from a string
        // is same.               
	    
	    
	    int nX = X.length();
	    int nY = Y.length();
	    
	    int dp[nX+1][nY+1] = {};
	    for (int i=1; i<=nX; i++)
	    {
	        for (int j=1; j<=nY; j++)
	        {
	            if (X[i-1] == Y[j-1]) dp[i][j] = dp[i-1][j-1]+1;
	            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	        }
	    }
	    int lcs = dp[nX][nY];
	    
	    int cX = costX * (nX - lcs);
	    int cY = costY * (nY - lcs);
	    
	    // cout << lcs << " " << (nX-lcs) << " " << (nY-lcs) << endl;
	    
	    
	    return cX+cY;
	}
  

};
	

//{ Driver Code Starts.
int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
       	string x, y;
       	cin >> x >> y;
        
       	int costX, costY;
       	cin >> costX >> costY;

        

        Solution ob;
        cout << ob.findMinCost(x, y, costX, costY);
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends