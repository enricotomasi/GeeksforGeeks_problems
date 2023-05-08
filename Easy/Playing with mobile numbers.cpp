//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		int is_valid(string s)
		{
		    // Code here
		    int n = s.length();
		    
		    if (n == 10)
		    {
		        if (s[0] == '7' || s[0] == '8' || s[0] == '9') return 1;
		    }
		    else if (n == 11)
		    {
		        if (s[0] == '0' && (s[1] == '7' || s[1] == '8' || s[1] == '9')) return 1;
		    }
		    else if (n == 12)
		    {
		        if (s[0] == '9' && s[1] == '1' && (s[2] == '7' || s[2] == '8' || s[2] == '9')) return 1;
		    }
		    
		    
		    return 0;
		    
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution obj;
		int ans = obj.is_valid(s);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends