//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:

    bool palindrome(string s, int n)
    {
        for (int i=0; i<=n/2; i++)
        {
            if (s[i] != s[n-1-i]) return false;
        }
        
        return true;
    }

	int isRotatedPalindrome(string s)
	{
	    // code here
	    int n = s.length();
	    
	    for (int i=0; i<n; i++)
	    {
	        string rot = s.substr(i, n) + s.substr(0, i);
	        if (palindrome(rot, n)) return 1;
 	    }
 	    
 	    return 0;
	}
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.isRotatedPalindrome(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends