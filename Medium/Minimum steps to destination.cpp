//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution 
{
  public:
    
    /*
        Hint:
              Notice if sum of steps reaches target or the difference between sum of steps and target is divisible by 2 
              then only that much steps are enough to reach target.
    */
    
    int rec(int dest, int step, int ans)
    {
        if (step - dest >= 0 && (step - dest) % 2 == 0)
        {
            return ans;
        }
        
        ans++;
        
        return rec(dest, step + ans, ans);
    }
    
    
    int minSteps(int d) 
    {
        // code here
        return rec(d, 0, 0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends