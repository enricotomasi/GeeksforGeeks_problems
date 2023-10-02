//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int maxChocolate(int N, int K)
    {
        // code here
        int ans = -1; 
        
        for(int i = 1; i <= K; i++)
        {
            ans = max(ans, N % i);
        }
            
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        
        Solution ob;
        cout<<ob.maxChocolate(N, K)<<endl;
    }
    return 0;
}
// } Driver Code Ends