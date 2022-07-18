//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
   	string  common_String(string s1, string s2)
   	{
   	    // Code here
   	    int mappa1[256] = {};
   	    int mappa2[256] = {};
   	    
   	    for (char c : s1)
   	    {
   	        mappa1[(int)c]++;
   	    }
   	    
   	    for (char c : s2)
   	    {
   	        mappa2[(int)c]++;
   	    }
   	    
   	    string ans = "";
   	    
   	    for (int i=0; i<256; i++)
   	    {
   	        if (mappa1[i] > 0 && mappa2[i] > 0)
   	        {
   	            ans += (char)i;
   	        }
   	    }
   	    
   	    if (ans != "") return ans;
   	    return "nil";
   	    
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s1, s2;
		cin >> s1 >> s2;
		Solution ob;
		string ans = ob.common_String(s1, s2);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends