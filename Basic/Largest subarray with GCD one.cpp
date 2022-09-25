//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
  public:

    
    int findLargestSubarray(int arr[], int n)
    {
        // code here
        // Hint: Gcd(A, B) will be 1 if A or B is 1.
    
        if (arr[0] == 1) return n;
        
        int last = arr[0];
        for (int i=1; i<n; i++)
        {
            if (arr[i] == 1) return n;
            if (__gcd(last,arr[i]) == 1) return n;
            last = arr[i];
        }

        return -1;    
    
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
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        cout << ob.findLargestSubarray(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends