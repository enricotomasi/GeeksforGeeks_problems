//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
  public:
    bool quad(int n)
    {
        int radq = sqrt (n);
        
        return (radq * radq) == n;
    }
    
    
    vector<int> nearestPerfectSquare(int N) 
    {
        // code here
        
        int i = N;
        int j = N;
        
        int ans0 = 0;
        
        while (true)
        {
            if (quad(i))
            {
                ans0 = i;
                break;
            }
            else if (quad(j))
            {
                ans0 = j;
                break;
            }
            
            i++;
            j--;
        }
        
        
        return {ans0, (abs(ans0 - N))};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> ans = ob.nearestPerfectSquare(N);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
// } Driver Code Ends