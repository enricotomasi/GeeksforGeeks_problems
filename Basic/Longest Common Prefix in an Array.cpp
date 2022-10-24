//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ans = arr[0];
        
        for (int i=1; i<N; i++)
        {
            string s = arr[i];
            string t = "";
            int l = min(ans.length(), s.length());
            
            for(int j=0; j<l; j++)
            {
                if (s[j] == ans[j]) t += s[j];
                else break;
            }
            
            if (t == "") return "-1";
            else ans=t;
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
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends