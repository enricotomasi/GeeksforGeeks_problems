// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int findDiff(int arr[], int n)
    {
        int occ[100001] = { };
        
        for (int i=0; i<n; i++)
        {
            occ[arr[i]]++;
        }
        
        int mi = INT_MAX;

        int ma = INT_MIN;

        
        for (int i=0; i<100001; i++)
        {
            if (occ[i] !=0)
            {
                if (occ[i] < mi)
                {
                    mi = occ[i];
                }
    
                if (occ[i] > ma)
                {
                    ma = occ[i];
                }
                
            }
        }
        
        // cout << ma << " " << mi << endl;
        
        if (ma == INT_MIN || mi == INT_MAX) return 0;
       
        return ma-mi;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n], i;
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.findDiff(arr, n) << "\n";
    }
    return 0;
}
  // } Driver Code Ends