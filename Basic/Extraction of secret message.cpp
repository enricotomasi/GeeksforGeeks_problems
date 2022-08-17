//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string ExtractMessage(string s);
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        string s;
	        cin>>s;
	        cout<<ExtractMessage(s)<<endl;
	    }
}
// } Driver Code Ends


string ExtractMessage(string s)
{
    // code here.
    int n = s.length();
    string ans = "";
    
    bool prima = true;
    for (int i=0; i<n; i++)
    {
        if (i<n-2)
        {
            if (s.at(i)   == 'L' &&
                s.at(i+1) == 'I' &&
                s.at(i+2) == 'E')
                {
                    if (ans.length() >0 && ans.at(ans.length()-1) != ' ') ans += ' ';
                    i+=2;
                    continue;
                }
        }
        prima = false;
        ans += s.at(i);
    }
    
    return ans;
    
}
