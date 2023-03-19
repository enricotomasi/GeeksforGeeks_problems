//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    string amendSentence (string s)
    {
        // your code here
        string ans = "";
        bool primo = true;
        
        for (auto c : s)
        {
            if (c >= 'A' && c<= 'Z') 
            {
                if (!primo)
                {
                    ans += ' ';
                }
                else
                {
                    primo = false;
                }
                
                ans += c + 32;
            }
            else
            {
                ans += c;
            }
            primo = false;
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}
// } Driver Code Ends