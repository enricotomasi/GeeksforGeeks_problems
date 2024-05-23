//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution 
{
  public:
    vector<int> primeRange(int M, int N) 
    {
        // code here
        if (N < 4)
        {
            if (M == 3) return { 3 };
            return { 2, 3 };
        }
        
        vector<bool> era(N + 1, true);
        era[0] = false;
        era[1] = false;
        
        for (int i = 2; i <= N; i++)
        {
            //cout << "i: " << i << endl;
            for (int j = i + i; j <= N; j += i)
            {
                //cout << j << endl;
                era[j] = false;
            }
        } 
        
        vector<int> ans;
        
        for (int i = M; i <= N; i++)
        {
            //cout << i << ", " << era[i] << endl;
            if (era[i])
            {
                ans.push_back(i);
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
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends
