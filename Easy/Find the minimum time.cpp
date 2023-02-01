//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int minTime(int S1, int S2, int N)
    {
        // code here
        int ans = INT_MAX;
        
        for (int i=0; i<N; i++)
        {
            int j = N-i;
            int tempo1 = max((S1*i), (S2*j));
            int tempo2 = max((S1*j), (S2*i));
            int tempo = min(tempo1, tempo2);
            // cout << i << " " << j << " --- " << tempo1 << " " << tempo2 << " ---- " << tempo << endl;
            ans = min(ans, tempo);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S1, S2, N;
        cin>>S1>>S2>>N;
        
        Solution ob;
        cout<<ob.minTime(S1, S2, N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends