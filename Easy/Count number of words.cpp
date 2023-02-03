//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int countWords(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<countWords(s)<<endl;
	    }
}
// } Driver Code Ends


//User function Template for C++

int countWords(string s)
{
    //code here.
    int ans = 0;
    int n = s.length();

    char last = ' ';
    for (int i=0; i<n; i++)
    {
        char curr = s[i];
        
        if (curr >= 'a' && curr <= 'z')
        {
            if ( (last == ' ' ) ||
                ((last == 'n' || last == 't') && i >= 2 && s[i-2] == '\\'))
                {
                    // cout << "ok " << curr << endl;
                    ans ++;
                }
        }

        last = curr;
    }
    
    
    
    return ans;
}