//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        int n = s.size();
        vector<string> temp;
        string t = "";
        
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                temp.push_back(t);
                t = "";
            }
            else
            {
                t += s[i];
            }
        }
        
        temp.push_back(t);
        
        string ans = "";
        
        for (auto it : temp)
        {
            reverse(it.begin(), it.end());
            ans += it;
            ans += '.';
        }
        
        ans.pop_back();
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
