//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    int noOfUniqueRectangles(int N)
    {
        // code here
        int ans = N;
        
        for (int i=2; i*i<=N; i++)
        {
            ans += (N/i)-i+1;
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
        cout << ob.noOfUniqueRectangles(N) << endl;
    }
    return 0;
}
// } Driver Code Ends