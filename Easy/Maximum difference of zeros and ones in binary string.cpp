//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:	
	int maxSubstring(string S)
	{
	    // Your code goes here
	    
	    // Used hint: 1. Assume o as 1 and 1 as -1, then apply Kadane’s algorithm
	    
	    int n =  S.length();
	    int ans = 0;
	    int local_max = 0;
	    
	    bool tuttiuno = true;
	    for (int i=0; i<n; i++)
	    {
	        int cifra = 0;
	        if (S.at(i) == '0')
	        {
	            cifra = 1;
	            tuttiuno = false;
	        }
	        else                cifra = -1;
	        
	        local_max = max(cifra, cifra + local_max);
	        ans = max(ans, local_max);
	    }
	    
	    return tuttiuno ? -1 : ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}

// } Driver Code Ends