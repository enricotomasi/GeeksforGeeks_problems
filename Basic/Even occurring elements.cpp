//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{   
public:
    vector<int> repeatingEven(int arr[], int n)
    {
        // code here
        int mappa[100001] = {};
        
        for (int i=0; i<n; i++)
        {
            mappa[arr[i]]++;
        }
        
        vector<int> ans;
        
        for (int i=0; i<100001; i++)
        {
            if (mappa[i] != 0 && mappa[i] %2 == 0)
            {
                ans.push_back(i);
            }
        }
        
        if (ans.size() <= 0)
        {
            ans.push_back(-1);
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.repeatingEven(arr, n);
        for (auto ele : ans) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends