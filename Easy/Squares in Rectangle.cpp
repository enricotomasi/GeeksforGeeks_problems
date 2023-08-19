//{ Driver Code Starts


// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:

    int minSquares(long long L, long long B)
    {
        // code here
        long long int m = 1000000007;
        if (L < B) return minSquares(B, L) % m;
        
        if (L == B)           return 1;
        if (L == 0 || B == 0) return 0;
        
        if (L == 1) return B % m;
        if (B == 1) return L % m;

        return (((L / B + m) % m) % m + minSquares(L % B, B) % m) % m;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, B;
        cin>>L>>B;
        
        Solution ob;
        cout<<ob.minSquares(L, B)<<endl;
    }
    return 0;
}
// } Driver Code Ends