//{ Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++

class Solution
{
  public:		
	int lps(string s)
	{
	    // Your code goes here
	    int n = s.length();
	    
	    vector<int> mappa(n,0);
	    for (int i=1; i<n; i++)
	    {
	        int j = mappa[i-1];
	        while (j>0 && s.at(i) != s.at(j))
	        {
	            j = mappa[j-1];
	        }
	        
	        if (s.at(i) == s.at(j))
	        {
	            j++;
	            mappa[i] = j;
	        }
	        
	    }
	    
	    return mappa[n-1];
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
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}

// } Driver Code Ends