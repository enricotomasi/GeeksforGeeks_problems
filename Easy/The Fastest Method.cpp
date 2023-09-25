//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int fastest(int N, int V1, int V2, int V3)
    {
        // code here
        double t1 = (N * 1.0) / V1;
        double t2 = (N * sqrt(2)) / V2;
        double t3 = N * sqrt(2) / V3;
        
        if (t1 <= t2 && t1 <= t3) return 1;
    
        if (t2 <= t3) return 2;
        
        return 3;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, V1, V2, V3;
        cin>>N>>V1>>V2>>V3;
        
        Solution ob;
        cout<<ob.fastest(N, V1, V2, V3)<<"\n";
    }
    return 0;
}
// } Driver Code Ends