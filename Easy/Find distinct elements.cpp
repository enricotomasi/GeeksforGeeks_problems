//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int distinct(vector<vector<int>> M, int N)
    {
        // code here
        unordered_map<int, int> mappa;
        
        for (int i=0; i<N; i++)
        {
            vector<int> arr = M[i];
            for (auto it : arr)
            {
                //cout << "#"<< i << "   " << it << ": " << mappa[it] << endl;
                if (mappa[it] == i) mappa[it]++;
                //cout << "#"<< i << "   " << it << ": " << mappa[it] << endl << endl;
            }
        }
        
        int ans = 0;
        
        for (auto it: mappa)
        {
            if (it.second >= N) ans++;
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> M(N, vector<int>(N, 0));
        for(int i = 0;i < N*N; i++)
            cin>>M[i/N][i%N];
        
        Solution ob;
        cout<<ob.distinct(M, N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends