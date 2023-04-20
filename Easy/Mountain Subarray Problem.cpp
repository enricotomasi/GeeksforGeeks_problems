//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class Solution
{
  public:
    vector<bool> processQueries(int a[], int n, vector<pair<int, int>> &queries, int q) 
    {
        // code here
        
        /*
            We can solve this problem by first some preprocessing then we can answer for each subarray in a constant amount of time.
            We maintain two arrays left and right where left[i] stores the last index on the left side which is increasing
            i.e. greater than its previous element and right[i] will store the first index on the right side which is decreasing i.e.
            greater than its next element.
            Once we maintained these arrays we can answer each subarray in constant time. 
            Suppose range [l, r] is given then only if right[l] >= left[r], the subarray will be in form of a mountain otherwise
            not because the first index in decreasing form (i.e. right[l]) should come later than the last index 
            in increasing form (i.e. left[r]).
        */

        vector<bool> ans;
        
        int maxSinistra = 0; 
        int maxDestra = n-1;
        
        vector<int> sinistra(n, 0);
        vector<int> destra(n, 0);

        sinistra[0] = 0;
        destra[n-1] = n-1;
        
        for (int i=1; i<n; i++)
        {
            if(a[i-1] < a[i]) maxSinistra = i;
            if(a[n-i] < a[n-i-1]) maxDestra = n-i-1;
            
            destra[n-i-1] = maxDestra;
            sinistra[i] = maxSinistra;
        }
        
        for (auto it : queries)
        {
            int inzio = it.first;
            int fine = it.second;
            if(destra[inzio] >= sinistra[fine]) ans.push_back(true);
            else ans.push_back(false);
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, i, q;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> q;
        vector<pair<int, int>> queries(q);
        for (i = 0; i < q; i++) {
            cin >> queries[i].first >> queries[i].second;
        }
        Solution obj;
        auto v = obj.processQueries(a, n, queries, q);
        for (bool u : v) {
            cout << (u ? "Yes\n" : "No\n");
        }
    }
    return 0;
}
// } Driver Code Ends