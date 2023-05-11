//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int totalCuts(int N, int K, vector<int> &A)
    {
        // Code here
        vector<int> mappa1;
        vector<int> mappa2;
        
        int minimo = INT_MAX;
        int massimo = INT_MIN;
        
        for (int i=N-1; i>0; i--)
        {
            minimo = min(minimo, A[i]);
            mappa1.push_back(minimo);
        }
        
        for (int i=0; i<N-1; i++)
        {
            massimo = max(massimo, A[i]);
            mappa2.push_back(massimo);
        }
       
        reverse(mappa1.begin(), mappa1.end());
        
        int ans = 0;
        
        for (int i=0; i<N-1; i++)
        {
            if (mappa1[i] + mappa2[i] >= K) ans++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends