//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str)
	{
	    // code here
	    int n = str.length();
	    int mappa[256] = {};
	    
	    string ans = "";
	    
	    for (int i=0; i<n; i++)
	    {
	        if (mappa[str[i]] == 0) ans += str[i];
	        mappa[str[i]]++;
	    }
	    
	    return ans;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends