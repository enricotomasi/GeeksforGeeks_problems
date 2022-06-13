// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution
{
public:	

	int countSubstringWithEqualEnds(string s)
	{
	    // Your code goes here
	    int ans = 0;
	    
	    int mappa[256] = {};
	    
	    for (int i=0; i<s.length(); i++)
	    {
	        mappa[s[i]]++;
	        ans += mappa[s[i]];
	    }
	    
	    
	    return ans;
	}
};

// { Driver Code Starts.

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

   		cout << ob.countSubstringWithEqualEnds(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends