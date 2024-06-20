//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution 
{
  // Hint: Use prime number concept
  
  public:
    int firstElement(int n)
    {
        // code here
        int m = 1000000007;
        
        if (n == 1)
        {
            return 1;
        }
        
        int a = 0;
        int b = 1;
        int ans = 1;
        
        for (int i = 0; i < n - 1; i++)
        {
            ans = (a + b) % m;
            a = b;
            b = ans;
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
        Solution ob;
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends