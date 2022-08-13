//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string binaryAdd(int n, string s)
    {
        // code here
        bool ok = false;
        
        for (int i=s.length()-1; i>=0; i--)
        {
            if (s[i] == '1') s[i] = '0';
            else 
            {
                s[i] = '1';
                ok = true;
                break;
            }
        }
        
        if (ok) return s;
        return '1' + s;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        
        Solution ob;
        cout<<ob.binaryAdd(n, s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends