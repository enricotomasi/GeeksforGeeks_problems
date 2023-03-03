//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closing (string s, int pos)
        {
        	//code here.
        	
        	int conta = 1;
        	for (int i=pos+1; i<s.length(); i++)
        	{
        	    if (conta == 0) return i-1;
        	    
        	    if (s[i] == '[')
        	    {
        	        conta++;    
        	    }
        	    else if (s[i] == ']')
        	    {
        	        conta--;
        	    }
        	    
        	    //cout << i << "# "<< s[i] << " " << conta << endl;
        	}
        	
        	
        	return s.length()-1;
        	
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int pos; cin >> pos;
        Solution ob;
		cout <<ob.closing (s, pos) << '\n';
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends