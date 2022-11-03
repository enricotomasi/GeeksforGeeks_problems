//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends

int longestSubstrDistinctChars (string S)
{
    // your code here
    
    /*
    Try using a 2 pointer approach.
    Move the right pointer till you get a repeating character. 
    Then, move the left character till you skip the first occurrence of that repeated character.
    */
    
    int ans=0;
    vector<int>prev(256,-1);

    int c = 0;
    for(int i=0;i<S.length();i++)
    {
        c = max(c,prev[S[i]]+1);
        int maxend = i-c+1;
        ans = max(maxend,ans);
        prev[S[i]] = i;
    }

    return ans;
    
    
    
   
}