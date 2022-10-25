//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n)
    {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long long>> coda;
        
        for (long long i=0; i<n; i++)
        {
            coda.push(arr[i]);
        }
        
        long long ans = 0;
        
        while (coda.size() >=2)
        {
            long long primo = coda.top();
            coda.pop();
            
            long long secondo = coda.top();
            coda.pop();
            
            ans += primo+secondo;
            coda.push(primo+secondo);
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends