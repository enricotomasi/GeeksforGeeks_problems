//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int LargButMinFreq(int arr[], int n)
{
    // code here
    unordered_map<int, int> mappa;
        
    for (int i=0; i<n; i++)
    {
        mappa[arr[i]]++;
    }
    
    int ans = 0;
    int freq = INT_MAX;
    
    for (auto it : mappa)
    {
        //cout << it.first << " " << it.second;
        if (it.second < freq || (it.second == freq && it.first > ans))
        {
            ans = it.first;
            freq = it.second;
            //cout << " ******* ";
        }
        //cout << "    " << ans << " " << freq << endl;
    }
    
    return ans;
}

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends