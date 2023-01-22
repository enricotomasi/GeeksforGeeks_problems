//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
  public:
    int maxStairHeight(int N) 
    {
        // Code here
        int ans = 0;
        int i = 1;
        
        while (N)
        {
            if (N-i >= 0)
            {
                N-=i;
                ans++;
            }
            else break;
            
            i++; 
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.maxStairHeight(N) << endl;
    }
    return 0;
}
// } Driver Code Ends