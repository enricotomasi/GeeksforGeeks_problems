//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution
{
  public:

    int minCostClimbingStairs(vector<int>&cost, int N) 
    {
        // Write your code here
        
        // MinCost[i] =min(MinCost[i - 1] + cost[i - 1],MinCost[i - 2] + cost[i - 2]).
        
        int dp[N+1];
        
        for (int i=0; i<N; i++)
        {
            int mc1 = 0;
            if (i >= 1)
            {
                mc1 = dp[i-1] + cost[i-1];
            }
            
            int mc2 = 0;
            if (i >= 2)
            {
                mc2 = dp[i-2] + cost[i - 2];
            }
            
            dp[i] = min(mc1, mc2);
        }
        
        
        //for (int i=0; i<N; i++) cout << dp[i] << " ";
        //cout << endl;
        
        return min((dp[N-1] + cost[N-1]) , (dp[N-2] + cost[N-2]));
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>cost(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>cost[i];
        }

        Solution ob;
        cout<<ob.minCostClimbingStairs(cost,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends