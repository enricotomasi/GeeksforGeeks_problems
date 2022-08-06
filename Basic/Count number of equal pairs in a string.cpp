//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
  public:
    long long int equalPairs (string s)
    {
    	//code here.
    	int mappa[256] = {};
    	
    	for (char c : s)
    	{
    	    mappa[c]++;
    	}
    	
    	int ans = 0;
    	for (int i=0; i<256; i++)
    	{
    	    ans+= pow(mappa[i],2);
    	}

    	return ans;
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
		cout <<ob.equalPairs (s) << endl;
	}
}
// } Driver Code Ends