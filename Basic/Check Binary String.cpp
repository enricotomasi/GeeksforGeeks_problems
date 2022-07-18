//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    bool checkBinary (string s)
    {
        // Your Code Here   
        int n = s.length();
        
        int lastOne = -1;
        int firstOne = -1;
        
        for (int i=0; i<n; i++)
        {
            if (s.at(i) == '1')
            {
                firstOne = i; 
                break;
            }
        }
        
        for (int i=n-1; i>=0; i--)
        {
            if (s.at(i) == '1')
            {
                lastOne = i; 
                break;
            }
        }
        
        
        for (int i=firstOne; i<lastOne; i++)
        {
            if (s.at(i) == '0')
            {
                return false;
            }
        }
   
        
        return true;
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		if (ob.checkBinary (s))
			cout << "VALID\n";
		else
			cout << "INVALID\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends