//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:
	bool commonSubseq (string a, string b)
	{
	    // your code here
	    int mappaA[26] = {};
	    int mappaB[26] = {};
	    
	    for (auto c : a)
	    {
	        mappaA[c - 'A']++;
	    }
	    
	    for (auto c : b)
	    {
	        mappaB[c - 'A']++;
	    }
	    
	    for (int i=0; i<26; i++)
	    {
	        if (mappaA[i] >= 1 && mappaB[i] >= 1) return true;
	    }
	    
	    return false;
	}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--) 
	{
		string a, b; cin >> a >> b;
		Solution ob;
		cout << ob.commonSubseq (a, b) << '\n';
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends