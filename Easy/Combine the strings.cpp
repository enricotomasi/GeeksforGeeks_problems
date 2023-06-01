//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    int combine(int n, string s[])
    {
        //code
        int ans = 0;
        int rr = 0;
        int rb = 0;
        int br = 0;
        int bb = 0;
	    
	    for (int i=0; i<n; i++)
	    {
	        int n = s[i].length();
	        if (s[i][0] == 'R')
	        {
	            if (s[i][n-1] == 'R') rr++;
	            else                  rb++;
	        }
	        else if (s[i][0]=='B')
	        {
	            if (s[i][n-1] == 'B') bb++;
	            else                  br++;
	        }    
	    }
	    
	    int m = min(rb, br);
	    
	    if      (rb == 0 && br == 0) ans=max(rr,bb);
	    else if (rb==br)             ans = rr + bb + (m * 2);
	    else                         ans=rr+bb+(2*m)+1;
	        
	    ans *= s[0].length();
	   
	    if (ans == s[0].length()) return 0;
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        string s[n];
        for(i=0;i<n;i++)
            cin>>s[i];
        Solution ob;
        cout<<ob.combine(n,s)<<endl;
    }
    return 0;
}

// } Driver Code Ends