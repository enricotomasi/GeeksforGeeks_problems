//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int minValue(string s, int k)
    {
        // code here
        int n = s.length();
        int mappa[27] = {};
        
        for (int i=0; i<n; i++)
        {
            mappa[s[i] - 'a']++;
        }
        
        while (k)
        {
            sort(mappa, mappa+27);
            mappa[26]--;
            k--;
        }
        
        int ans = 0;
        
        for (int i=0; i<27; i++)
        {
            ans += mappa[i] * mappa[i];
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends