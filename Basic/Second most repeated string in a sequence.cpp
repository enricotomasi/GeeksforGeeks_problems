//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string,int> mappa;
        
        for (int i=0; i<n; i++)
        {
            mappa[arr[i]]++;
        }
        
        int massimo = INT_MIN;
        
        for (auto i : mappa)
        {
            massimo = max(massimo, i.second);
        }
        
        string ans = "";
        int massimo2 = INT_MIN;
        for (auto i: mappa)
        {
            if (i.second != massimo && i.second > massimo2)
            {
                massimo2 = i.second;
                ans = i.first;
            }
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
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends