//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
  public:
    vector<int> maxPrefixes(int a[], int L[], int R[], int N, int Q)
    {
        vector<int> ans;

        for (int i = 0; i < Q; i++)
        {
            int left = L[i];
            int right = R[i];
            
            int somma = INT_MIN;
            int s = 0;
            
            for (int j = left; j <= right; j++)
            {
               s += a[j];
               somma = max(somma, s);
           }
           ans.push_back(somma);
       }
       
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int a[n], L[q], R[q];
        
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < q; i++) cin >> L[i] >> R[i];
        Solution obj;
        vector<int> ans = obj.maxPrefixes(a, L, R, n, q);
        for (auto it : ans) 
            cout << it << " ";
        cout << endl;
    }
}

// } Driver Code Ends