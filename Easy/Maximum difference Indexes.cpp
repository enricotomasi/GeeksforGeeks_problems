//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int maxDiffIndex(int A[], int N)
    {
        map<int, pair<int, int>> mappa;
        
        for (int i=0; i<N; i++)
        {
            if (mappa.find(A[i]) == mappa.end())
            {
                mappa[A[i]] = {i, i};
            }
            else
            {
                mappa[A[i]].second = i;
            }
        }
        
        int ans = -1;
        
        for (auto it : mappa)
        {
            int diff = (it.second.second) - (it.second.first);
            ans = max(ans, diff);
        }
        
        return ans;
    }
    
    
};

//{ Driver Code Starts.

int main()
 {
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
            cin>>a[i];
         Solution ob;
         cout<<ob.maxDiffIndex(a, n)<<"\n";
     }
	return 0;
}
// } Driver Code Ends