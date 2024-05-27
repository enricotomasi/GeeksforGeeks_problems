//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution
{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    
    /*
    
    Let us use a window covering from index wL to index wR. Let the number of zeros inside the window be zeroCount. 
    We maintain the window with at most m zeros inside.

    The main steps are:
    
    – While zeroCount is no more than m: expand the window to the right (wR++) and update the count zeroCount.
    – While zeroCount exceeds m, shrink the window from left (wL++), update zeroCount;
    – Update the widest window along the way. The positions of output zeros are inside the best window.
    
    */
    
    int findZeroes(int arr[], int n, int m)
    {
        // code here
        int ans = 0;
    
        int start = 0;
        int z = 0;
    
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                z++;
            }
    
            while (arr[i] == 0 && z > m)
            {
                if (arr[start++] == 0)
                {
                    z--;
                }
            }
    
            if (z <= m)
            {
                ans = max(ans, i - start + 1);
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
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
