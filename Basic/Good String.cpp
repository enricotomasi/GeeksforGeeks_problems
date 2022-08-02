//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string isGoodString(string s);
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	       string s;
	       cin>>s;
	       cout<<isGoodString(s)<<endl;
	    }
}	    
	    
// } Driver Code Ends


string isGoodString(string s)
{
    //code here.
    int n = s.length();
    char last = s.at(0);
    
    for (int i=1; i<n; i++)
    {
        if (abs(last-s.at(i)) == 0) return "NO";
        
        last = s.at(i);
    }
    
    return "YES";
    
}