//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{   
public:
    bool isProduct(int arr[], int n, long long x) 
    {
        // code here
        /*
            Hint 1:
            Can you use sorting and binary search to solve this problem in O(N log N) ?
            
            Hint 2:
            Can you use hash map to solve the problem in O(n) ?  
            For each element check If (x % arr[i]) is 0 and (x/arr[i]) exists in the hash map.
        */
        
        set<int> mappa;
        
        for (int i=0; i<n; i++)
        {
            if (arr[i] != 0 && x % arr[i] == 0)
            {
                mappa.insert(arr[i]);
                if (mappa.find(x / arr[i]) != mappa.end()) return true;
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        long long x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.isProduct(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
// } Driver Code Ends