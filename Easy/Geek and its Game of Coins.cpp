//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findWinner(int N, int X, int Y)
	{
		// Your code goes here
		
		// Ci sono N monete
		// Per ogni mossa il giocatore può prendere X Y o 1 moneta
		// Geek gioca per primo
		// Vince il giocatore che prende l'ultima moneta
		// Output: geek vince la partita?
		
		// Used hint:
		// Let us take few example values of n for x = 3, y = 4.
        // n = 0 A can not pick any coin so he losses
        // n = 1 A can pick 1 coin and win the game
        // n = 2 A can pick only 1 coin. Now B will pick 1 coin and win the game
        // n = 3 4 A will win the game by picking 3 or 4 coins
        // n = 5, 6 A will choose 3 or 4 coins. Now B will have to choose from 2 coins so A will win.
        // 
        // We can observe that A wins game for n coins only when it loses for coins n-1, n-x and n-y.
        
        int dp[N+1];
        dp[0]=0;

		for(int i=1; i<=N; i++)
		{
		    if((i-X>=0 && dp[i-X]==0) || (i-Y>=0 && dp[i-Y]==0) || (i-1>=0 && dp[i-1]==0)) dp[i]=1;
		    else                                                                	       dp[i]=0;
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
       	int n, x, y;
       	cin >> n >> x >> y;

       

        Solution ob;
        cout << ob.findWinner(n, x, y);
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends