//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here

        vector<int> ans;
        int minimo = 0;
        int massimo = 0;
        
        sort(candies, candies+N);
        
        if (K==0)
        {
            for (int i=0; i<N; i++)
            {
                massimo += candies[i];
                minimo += candies[i];
            }
        }
        else
        {
            double dc = (double)N / ((double) K + 1.0);
            int daComprare = ceil(dc);
            // cout << "daComprare:" << daComprare << endl;
            
            for (int i=0; i<daComprare; i++)
            {
                // cout << candies[i] << " ";
                minimo += candies[i];
            }
            // cout << endl;
            
            for (int i=N-1; i>N-daComprare-1; i--)
            {
                // cout << candies[i] << " ";
                massimo += candies[i]; 
            }
            // cout << endl;
        }
        
        ans.push_back(minimo);
        ans.push_back(massimo);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends