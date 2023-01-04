//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string printString(string &S, char ch, int count)
	{
	    // Your code goes here
	    int n = S.length();
	    string ans = "";
	    
	    for (int i=0; i<n; i++)
	    {
            // cout << i << " " << count << " " << S[i] << " " << ans << endl;
            if (count <= 0) ans += S[i];
            else if (S[i] == ch) count--;
	    }
	    
	    if (ans == "") ans = "Empty string";
	    
	    return ans;
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
   		string s;
   		char ch;
   		int count;

   		cin >> s >> ch >> count;
   		Solution ob;
   		cout << ob.printString(s, ch, count) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends