//{ Driver Code Starts
//Initial template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    int ExcelColumnNumber(string s)
    {
        // Your code goes here
        int n = s.length();
        int ans = 0;
        int pot = 0;
        
        for (int i=n-1; i>=0; i--)
        {
            int cifra = s[i] - 'A' +1;
            ans += pow(26, pot) * cifra;
            pot++;
            //cout << cifra << " " << pot << " " << ans << endl;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.ExcelColumnNumber(s)<<endl;
    }
}
// } Driver Code Ends