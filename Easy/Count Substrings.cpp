//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:
	
	int countSubstr (string S)
	{
	    // your code here
	    int uni = 0;
	    
	    for (char c : S)
	    {
	        if (c=='1') uni++;
	    }
	    
	    if (uni < 2) return 0;
	    
	    return (uni * (uni-1)) /2;
	    
	    
	    
	}
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        
        cout << ob.countSubstr (s) << '\n';
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends