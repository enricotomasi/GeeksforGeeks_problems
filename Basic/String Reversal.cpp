
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}
// } Driver Code Ends


string reverseString(string s)
{
    //code here
    string ans = "";
    int mappa[256] = {};
    mappa[32]++; // space
    
    for (int i=s.length()-1; i>=0; i--)
    {
        int c = (int)s.at(i);
        
        if (mappa[c] < 1)
        {
            ans+=(char)c;
        }
    
        mappa[c]++;
    }
    
    return ans;
    
}