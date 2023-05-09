//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int minManipulation (int n, string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << minManipulation (n, s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minManipulation (int N, string S1, string S2)
{
    // your code here
    int mappa1[256] = {};
    
    for (int i = 0; i < N; i++)
    {
        mappa1[S1[i]]++;
    }
    
    int mappa2[256] = {};
    for (int i = 0; i < N; i++)
    {
        mappa2[S2[i]]++;
    }
    
    int ans = 0;
    
    for (int i = 0; i < 256; i++)
    {
        ans += abs(mappa1[i] - mappa2[i]);
    }
    
    return ans / 2;
    
    
}