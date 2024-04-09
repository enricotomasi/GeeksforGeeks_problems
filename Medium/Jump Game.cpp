//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    int canReach(int A[], int N)
    {
        // code here
        vector<int> dp(N, 0);
        
        dp[N - 1] = 1;
        int temp = N - 1;
        
        for (int i = N - 2; i >= 0; i--)
        {
            if (A[i] == 0)
            {
                dp[i] = 0;
            }
            else
            {
                if (A[i] + i >= temp)
                {
                    dp[i] = 1;
                    temp = i;
                }
            }
            
        }
        
        return dp[0];
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
// } Driver Code Ends