//{ Driver Code Starts
//Initial Template for C++



#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
	public:
		int maximum_distance(string s)
		{
		    // Code Here
		    int n = s.length();
            unordered_map<char,int> mappa;
            
            for (int i = 0; i < n; i++) mappa[s[i]] = i;

            char carattere = s[0] + 1;
            int ans = -1;
            
            for(int i = 0; i<s.length(); i++)
            {
                if (mappa.find(carattere) == mappa.end()) break;
                if (mappa[carattere] > ans) ans = mappa[carattere];
                if (s[i] == carattere) carattere++; 
            }
            
            if (ans == -1) return -1;
            
            return ans + 1;
 
		}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string s;
	    cin >> s;
	    int k;
	    Solution ob;
	    int ans = ob.maximum_distance(s);
	    cout<<ans<<"\n";
    }
	return 0;
}
// } Driver Code Ends