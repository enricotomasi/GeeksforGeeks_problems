//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution 
{
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        // Your code goes here
        sort(a, a+n);
        sort(b, b+m);
        
        int ans = 0;
        int j = 0;
        
        int last = -1;
        for (int i=0; i<n; i++)
        {
            // cout << i << " " << j << " **** " << a[i] << " " << b[j] << endl;
            if (last == a[i]) continue;
            last = a[i];
            
            while (b[j] <= a[i] && j < m)
            {
                // cout << "**** int ***** " << i << " " << j << " **** " << a[i] << " " << b[j] << endl;
                if (b[j] == a[i])
                {
                    ans++;
                    break;
                }
                j++;
            }
            
            if (j>m-1)
            {
                break;
            }
            
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends